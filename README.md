# LeanPy

**An experimental proof layer for agentic task contracts.**

The idea is simple: treat agent/task intent like declarative state.
Runtime code (Python today; Go/Rust are natural peers) produces artifacts and receipts; Lean proves invariants about what those artifacts are allowed to claim.

Think **Kubernetes-style declarative intent**, but with a proof layer:

```text
INTENT / TASK CONTRACT
        ↓
RUNTIME EXECUTION
(Python / Go / Rust / agents)
        ↓
CANDIDATE + RECEIPT
        ↓
LEAN INVARIANTS
        ↓
ACCEPT / REJECT / UNMEASURED
```

## Why this exists

Agent systems are good at producing work and equally good at producing confident descriptions of work that did not actually happen.

LeanPy explores a narrower question:

> Can we make important task/review claims carry machine-checkable proof obligations instead of trusting prose, schemas, or the model that produced them?

Examples of the kind of invariant this repo cares about:

```text
observations = 0  →  state ≠ Verified
falsifiers > claims → invalid result
declared metric ≠ measured metric → inconsistent evidence
```

## Small concrete example

`lean/HeraklesBirlesik.lean` contains a real failure case from an agent workflow:

```lean
structure Sayim where
  iddia       : Nat
  falsifierli : Nat

def Tutarli (s : Sayim) : Prop := s.falsifierli ≤ s.iddia

theorem k4_python_bozuk_reddedilir : ¬ Tutarli ⟨2, 4⟩ := by
  unfold Tutarli
  intro h
  exact absurd h (by decide)
```

The runtime produced an impossible count: 2 claims, 4 claim-bound falsifiers. The Lean invariant rejects that state.

This is the pattern I want to generalize to PR gates, task transitions, review states, evidence receipts, and eventually higher-level intent contracts.

## Current architecture

```text
python/leanpy.py
  Candidate(value, contract, witness)
        │
        ├─ hashes the concrete candidate
        ├─ runs the selected Lean source
        └─ emits a receipt (GREEN / RED / OLCULEMEDI)

lean/*.lean
  domain invariants + concrete proof obligations
```

The Python side is intentionally small. The trust boundary is not "Python is proven correct". The goal is to make critical claims pass through explicit invariants and leave a receipt.

## Important current limitation

**The prototype does not yet compile arbitrary runtime candidate values into Lean propositions automatically.**

Today:

- candidate values are hashed into the receipt,
- Lean contract files are typechecked,
- concrete failure cases are encoded and proved in Lean,
- `sorry` / `admit` are rejected by the Python bridge.

Still missing:

- deterministic `Candidate → Lean proposition` generation,
- cryptographic binding between the exact runtime value and the exact proved proposition,
- a generic contract schema for task/PR/review state machines.

That missing binding is the main engineering problem, not something this README hides.

## Repository map

| path | purpose |
|---|---|
| `python/leanpy.py` | minimal Python → Lean bridge + receipt generation |
| `lean/HeraklesBirlesik.lean` | system invariants extracted from real failures |
| `lean/RetrievalRL.lean` | retrieval / curiosity experiment |
| `lean/DersAdam.lean` | learning-system invariants |
| `lean/BMH.lean` | constitution-style constraints |
| `bench/` | experiments / measurements |

## Measured snapshot

At the current snapshot the repository contains multiple Lean proof files with no `sorry` / `admit`; the existing README measurement recorded 75 theorems across 921 Lean lines on Lean 4.33.1 core (no mathlib). Treat those numbers as a snapshot, not a permanent project claim.

## Run

Requirements:

- Python 3.10+
- Lean 4 available as `lean`

```bash
python python/leanpy.py
```

For the Lean side directly:

```bash
cd lean
lake build
```

## Design rule

```text
PROOF ≠ BINDING
LEAN TYPECHECKS ≠ OPERATIONAL CLAIM GROUNDED
```

A theorem is useful only when it protects a real system boundary.

## Status

Experimental and intentionally small. I am learning Lean while using this repository to test whether formal proofs can become a practical verification layer around agent intent, task contracts, PR gates, and evidence-bearing workflows.
