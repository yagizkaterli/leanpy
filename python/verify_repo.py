#!/usr/bin/env python3
"""Externally reproducible verifier for LeanPy.

Checks only public repository state. Fails closed on any verification error.
"""
from __future__ import annotations

import base64
import gzip
import hashlib
import json
import os
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
LEAN_DIR = ROOT / "lean"
RECEIPT = ROOT / "docs" / "hff" / "leanpy-proof-layer.receipt.json"

SECRET_PATTERNS = [
    re.compile(rb"-----BEGIN (?:[A-Z0-9 ]*PRIVATE KEY|PGP PRIVATE KEY BLOCK)-----"),
    re.compile(rb"\b(?:gh[pousr]_[A-Za-z0-9_]{20,}|github_pat_[A-Za-z0-9_]{20,})\b"),
    re.compile(rb"\bAKIA[0-9A-Z]{16}\b"),
    re.compile(rb"\bAIza[0-9A-Za-z_-]{35}\b"),
    re.compile(rb"\bxox[baprs]-[A-Za-z0-9-]{10,}\b"),
    re.compile(rb"(?i)\b(?:api[_-]?key|access[_-]?token|auth[_-]?token|client[_-]?secret|password|passwd|secret|token)\s*=\s*[\"']?[^\s\"',;]{8,}"),
]

FORBIDDEN_NAMES = {".env", ".env.local", ".env.production", ".env.development"}
SKIP_DIRS = {".git", ".lake", "__pycache__", ".venv"}


def sha256(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def run(*args: str, cwd: Path | None = None) -> subprocess.CompletedProcess[str]:
    return subprocess.run(args, cwd=cwd, text=True, capture_output=True)


def tracked_files() -> list[Path]:
    p = run("git", "ls-files", "-z", cwd=ROOT)
    if p.returncode != 0:
        raise RuntimeError("git ls-files failed")
    return [ROOT / x for x in p.stdout.split("\0") if x]


def scan_bytes(data: bytes, label: str) -> list[str]:
    findings: list[str] = []
    for pat in SECRET_PATTERNS:
        if pat.search(data):
            findings.append(f"secret-pattern:{label}")
            break

    # Embedded base64 blocks: decode reasonably sized chunks and rescan.
    for m in re.finditer(rb"[A-Za-z0-9+/]{40,}={0,2}", data):
        chunk = m.group(0)
        try:
            decoded = base64.b64decode(chunk, validate=True)
        except Exception:
            continue
        if decoded != data:
            for pat in SECRET_PATTERNS:
                if pat.search(decoded):
                    findings.append(f"secret-pattern-base64:{label}")
                    return findings

    if data.startswith(b"\x1f\x8b"):
        try:
            decoded = gzip.decompress(data)
        except Exception:
            decoded = b""
        if decoded and len(decoded) <= 4 * 1024 * 1024:
            for pat in SECRET_PATTERNS:
                if pat.search(decoded):
                    findings.append(f"secret-pattern-gzip:{label}")
                    break
    return findings


def check_secrets() -> list[str]:
    findings: list[str] = []
    for path in tracked_files():
        rel = path.relative_to(ROOT)
        if any(part in SKIP_DIRS for part in rel.parts):
            continue
        if path.name in FORBIDDEN_NAMES:
            findings.append(f"forbidden-env-file:{rel}")
            continue
        try:
            data = path.read_bytes()
        except OSError as exc:
            findings.append(f"unreadable:{rel}:{exc}")
            continue
        findings.extend(scan_bytes(data, str(rel)))
    return findings


def check_hff_receipt() -> list[str]:
    if not RECEIPT.exists():
        return ["missing-hff-receipt"]
    r = json.loads(RECEIPT.read_text(encoding="utf-8"))
    errors: list[str] = []
    for path_key, hash_key in [
        ("source_path", "source_sha256"),
        ("artifact_path", "artifact_sha256"),
    ]:
        p = ROOT / r[path_key]
        if not p.exists():
            errors.append(f"missing:{r[path_key]}")
            continue
        actual = sha256(p)
        if actual != r[hash_key]:
            errors.append(f"digest-mismatch:{r[path_key]}")
    return errors


def check_lean_sources() -> list[str]:
    errors: list[str] = []
    lean_files = sorted(LEAN_DIR.glob("*.lean"))
    if not lean_files:
        return ["no-lean-files"]
    for path in lean_files:
        text = path.read_text(encoding="utf-8")
        stripped = "\n".join(line.split("--", 1)[0] for line in text.splitlines())
        if re.search(r"\b(sorry|admit)\b", stripped):
            errors.append(f"forbidden-proof-hole:{path.relative_to(ROOT)}")

    p = run("lake", "build", cwd=LEAN_DIR)
    if p.returncode != 0:
        errors.append("lake-build-failed")
    return errors


def main() -> int:
    checks = {
        "secret_scan": check_secrets(),
        "hff_receipt": check_hff_receipt(),
        "lean": check_lean_sources(),
    }
    ok = all(not v for v in checks.values())
    git = run("git", "rev-parse", "HEAD", cwd=ROOT)
    receipt = {
        "schema": "leanpy-public-verification-v1",
        "ok": ok,
        "git_sha": git.stdout.strip() if git.returncode == 0 else None,
        "checks": {k: {"ok": not v, "errors": v} for k, v in checks.items()},
    }
    print(json.dumps(receipt, indent=2, sort_keys=True))
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
