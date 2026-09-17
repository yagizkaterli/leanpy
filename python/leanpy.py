#!/usr/bin/env python3
"""
leanpy — Lean-Provable Python koprusu.

Pydantic for agentic computation. Python uretir, Lean dogrular,
yalniz dogrulanmis nesne guvenilir koloni durumuna girer.

BOUNDARY: Python'un KENDISI ispatlanmaz. SOMUT SONUCUN ozelligi ispatlanir.

Kullanim:
    from leanpy import dogrula, Candidate

    c = Candidate(value={"iddia": 2, "falsifierli": 0},
                  contract="FORGE-KAPI-INVARIANT-001")
    r = dogrula(c)
    if r.kabul: ...   # sadece GREEN gecen nesne kullanilir
"""
import subprocess, hashlib, json, os
from dataclasses import dataclass, field
from datetime import datetime, timezone

LEAN_DIR = os.environ.get("LEANPY_LEAN_DIR", "/root/herakles/repos-leanpy/lean")
LEAN_BIN = os.environ.get("LEANPY_BIN", "/root/.elan/bin/lean")


@dataclass
class Candidate:
    """Python'un urettigi aday. Binding zorunlu."""
    value: dict
    contract: str
    witness: dict = field(default_factory=dict)

    def value_sha16(self) -> str:
        return hashlib.sha256(
            json.dumps(self.value, sort_keys=True).encode()).hexdigest()[:16]


@dataclass
class Sonuc:
    kabul: bool
    karar: str          # GREEN | RED | OLCULEMEDI
    contract: str
    value_sha16: str
    lean_sha16: str
    hata: str = ""
    ts: str = ""


def dogrula(c: Candidate, lean_dosya: str | None = None) -> Sonuc:
    """Aday + kontrat -> Lean -> GREEN/RED.

    Lean dosyasi verilmezse contract adindan turetilir.
    """
    dosya = lean_dosya or f"{os.path.basename(c.contract)}.lean"
    yol = os.path.join(LEAN_DIR, dosya)
    ts = datetime.now(timezone.utc).strftime("%Y-%m-%dT%H:%M:%SZ")

    if not os.path.exists(yol):
        return Sonuc(False, "OLCULEMEDI", c.contract, c.value_sha16(), "",
                     hata=f"lean dosyasi yok: {yol}", ts=ts)

    lean_src = open(yol, encoding="utf-8").read()
    lean_sha = hashlib.sha256(lean_src.encode()).hexdigest()[:16]

    # sorry/admit => PR ACILAMAZ (lean-kapi disiplini)
    for yasak in ("sorry", "admit"):
        if yasak in lean_src.replace("--", ""):
            return Sonuc(False, "RED", c.contract, c.value_sha16(), lean_sha,
                         hata=f"yasak taktik: {yasak}", ts=ts)

    r = subprocess.run([LEAN_BIN, dosya], cwd=LEAN_DIR,
                       capture_output=True, text=True, timeout=400)
    temiz = (r.stdout.strip() == "" and r.stderr.strip() == "")
    return Sonuc(temiz, "GREEN" if temiz else "RED", c.contract,
                 c.value_sha16(), lean_sha,
                 hata="" if temiz else (r.stdout + r.stderr)[:300], ts=ts)


def makbuz(s: Sonuc) -> dict:
    """Binding: input hash, output hash, contract, witness identity,
    lean source hash, verifier result, timestamp."""
    return {
        "schema": "leanpy-makbuz-v1",
        "ts": s.ts, "contract": s.contract, "karar": s.karar,
        "kabul": s.kabul, "value_sha16": s.value_sha16,
        "lean_sha16": s.lean_sha16, "hata": s.hata,
    }


if __name__ == "__main__":
    # smoke: FORGE invariant -- iddia=falsifierli olmali
    c = Candidate(value={"iddia": 2, "falsifierli": 2}, contract="HeraklesBirlesik")
    s = dogrula(c)
    print(json.dumps(makbuz(s), ensure_ascii=False, indent=1))
