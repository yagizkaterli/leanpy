# Contributing to LeanPy

LeanPy = **Lean-Provable Python for Agentic Computation.** Python/agent produces a candidate; Lean verifies the critical property; only a verified object enters trusted state.

## The one rule

We do NOT prove Python correct. We prove **properties of the concrete result** — bound to input hash, output hash, contract identity, and verifier result.

```
LIVE STATE -> PYTHON -> CANDIDATE + WITNESS -> LEAN -> ACCEPT / RED -> COLONY ACTION
```

## Before you submit

1. `bench/bench.sh` must pass **7/7 modules** (mechanical acceptance).
2. `lean/lakefile.lean` + `lake build` must succeed (Lean proof — `sorry`/`admit` count must stay 0).
3. Every claim you add must carry a **falsifier**: what specific observation would disprove it? No falsifier, no merge.

## Layout

- `lean/` — the Lean 4 proofs (AksonNoron, BMH, DersAdam, HeraklesBirlesik, MatematikProjesi, RetrievalRL, Tanik, LobiFaz)
- `python/leanpy.py` — the Python/agent candidate producer
- `bench/bench.sh` — the mechanical benchmark (7/7 gate)

## License

MIT. See `LICENSE`.
