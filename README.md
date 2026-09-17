# LeanPy — Lean-Provable Python for Agentic Computation

**Pydantic for agentic computation.** Python/agent produces a candidate;
Lean verifies the critical property; only a verified object enters trusted
colony state.

## The boundary

We do NOT prove Python correct. We prove **properties of the concrete
result** — bound to input hash, output hash, contract identity and
verifier result.

```
LIVE STATE -> PYTHON -> CANDIDATE + WITNESS -> LEAN -> ACCEPT / RED -> COLONY ACTION
```

## Measured state

| olcum | deger |
|---|---|
| lean dosya | 7 |
| satir | 921 |
| teorem | 75 |
| sha256 (tum lean) | `b719ca7e96d2a72665f464733f767b0e` |
| Lean surumu | 4.33.1 (core, mathlib YOK) |
| sorry/admit | 0 |

## Real closed loop (olculdu)

Python computed `iddia=2 falsifierli=4` — an **impossible** ratio
(falsifier > claim). Lean's invariant `falsifierli <= iddia` rejected it:

- `python_bozuk_cikti_reddedilir : not Tutarli <2,4>` — **proved**
- Go organ (`kolonik-os`) independently answered `GECTI`
- **External verification produced real value**: it caught the Python bug.

## Teorem seti

| dosya | kapsam | teorem |
|---|---|---|
| `Tanik.lean` | Lean->Go kopru testi | — |
| `BMH.lean` | Bilincin Makine Hali constitution (6 kural) | 10 |
| `MatematikProjesi.lean` | ITU muafredat 6 eksen | 12 |
| `HeraklesBirlesik.lean` | 6 katman reverse-engineering | 19 |
| `DersAdam.lean` | ogrenme mimarisi (mastery block) | 14 |
| `RetrievalRL.lean` | AdaMAE curiosity -> retrieval RL | 7 |
| `AksonNoron.lean` | akson/noron kanit | 9 |

## Falsifiers that produced evidence

- `python_bozuk_cikti_reddedilir` — Python sayim hatasi yakalandi
- `c5_kaynaksiz_metrik_gecersiz` — '%49 sahte-yesil' kaynaksiz metrik
- `ortak_pano_bug_tutarsiz` — pano beyan 3855 vs olcum 3860
- `k2_kapsulv2_graf_degil` — kapsul-v2 0 kenar, graf degil

## Kural

```
PROOF != BINDING
LEAN TYPECHECKS != OPERATIONAL CLAIM GROUNDED
```

Her teorem bir KORUMA. Dekoratif matematik yasak.
