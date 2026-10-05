# LeanPy public release boundary

LeanPy is a small verification boundary for Python and agent-generated decisions.

A producer computes a concrete candidate. Lean checks a property of the artifact. LeanPy returns a bound verification result that can be used as an admission gate.

```text
Python / agent
    |
    v
candidate + contract
    |
    v
Lean verifier
    |
    +---- RED ------> reject
    |
    `---- GREEN ----> eligible for downstream action
```

## What this project claims

LeanPy aims to make one narrow statement useful in ordinary Python systems:

> A concrete candidate can be required to carry machine-checked evidence satisfying a declared Lean contract before downstream code accepts it.

It does **not** claim that Python itself is formally verified, that a type-check proves a runtime system correct, or that a theorem automatically corresponds to an informal product claim.

## Public v0 acceptance criteria

Before making the repository public, the public surface should have:

- a portable Python package with no `/root/herakles/...` default paths;
- a minimal runnable example independent of HERAKLES internals;
- tests for GREEN, RED, missing verifier/contract, and forbidden proof holes;
- exact candidate/contract/verifier binding in the receipt;
- installation and quick-start documentation;
- an explicit security and trust-boundary section;
- a license;
- no private colony paths, private operational measurements, internal names, API keys, transcripts, or benchmark methodology.

## Commercial wedge

The first paid surface should stay smaller than a general formal-verification platform: **proof-gated agent actions**.

A useful integration receives a candidate action plus a contract, runs the verifier, and emits a machine-readable receipt. The customer decides what a GREEN receipt is allowed to unlock.

Potential first deliverable: a paid integration session that adds one proof gate to an existing Python/agent workflow and leaves the customer with the contract, verifier adapter, tests, and receipt schema.

## Release rule

Do not publish the current repository merely because Lean files type-check. Public release is a separate delivery claim. It requires the portable package and examples above to exist and be inspectable from a clean checkout.
