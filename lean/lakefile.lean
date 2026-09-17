import Lake
open Lake DSL

package leanpy

-- Tum moduller tek kutuphanede. Her biri bagimsiz derlenir.
@[default_target]
lean_lib LeanPy where
  roots := #[
    `AksonNoron,
    `BMH,
    `DersAdam,
    `HeraklesBirlesik,
    `LobiFaz,
    `MatematikProjesi,
    `RetrievalRL,
    `LeanPyKopru
  ]
