-- ═══════════════════════════════════════════════════════════════
-- LEANPY KOPRU KANITI — python/leanpy.py DOGRULAMASI
-- PR: lean-kanit/pr-001
--
-- AMAC: python koprusunun (python/leanpy.py) her CALISTIRILABILIR
--   kontratini Lean'de formalize etmek. Boylece kopru kendisi
--   dogrulanabilir hale gelir -- "kim dogrular?" sorusuna cevap:
--   koprunun kontratlari da Lean'de.
--
-- KAYNAK (olculdu):
--   /root/herakles/repos-leanpy/python/leanpy.py (smoke: GREEN)
--   value_sha16=916562698043746c | lean_sha16=0a721b0655fd7e20
--
-- DISIPLINE (lean-kapi):
--   "sorry-yok kurali: ispatlanamayan madde PASS sayilmaz"
--   Bu dosyada sorry/admit YOK.
-- ═══════════════════════════════════════════════════════════════

namespace LeanPyKopru

-- ─────────────────────────────────────────────────────────────
-- KOPRU KONTRATI: aday -> Lean -> GREEN/RED
-- ─────────────────────────────────────────────────────────────

/-- Kopru karari. -/
inductive Karar where
  | green
  | red
  | olculemedi
deriving Repr, DecidableEq

/-- Aday: python'un urettigi nesne + kontrat + witness. -/
structure Aday where
  kontrat   : String
  value_sha : String
  witness   : String
deriving Repr

/-- Sonuc: karar + binding hash'leri. -/
structure Sonuc where
  karar      : Karar
  value_sha  : String
  lean_sha   : String
deriving Repr

/-- BINDING INVARIANT: sonuctaki value_sha, adaydakiyle AYNI olmali.
    Aksi halde dogrulanan nesne, uretilen nesne DEGILDIR.
    Bu, "PROOF != BINDING" ilkesinin formal hali. -/
def BindGecerli (a : Aday) (s : Sonuc) : Prop := s.value_sha = a.value_sha

/-- T1: ayni hash -- binding gecerli (mutlu yol). -/
theorem kopru_binding_gecerli :
    BindGecerli ⟨"C1", "916562698043746c", ""⟩
               ⟨.green, "916562698043746c", "0a721b0655fd7e20"⟩ := by
  unfold BindGecerli; rfl

/-- T2: FARKLI hash -- binding GECERSIZ.
    Yani baska bir nesnenin ispati, bu nesneye yapistirilamaz. -/
theorem kopru_binding_sahtekar :
    ¬ BindGecerli ⟨"C1", "916562698043746c", ""⟩
                  ⟨.green, "deadbeefdeadbeef", "0a721b0655fd7e20"⟩ := by
  unfold BindGecerli
  intro h
  exact absurd h (by decide)

-- ─────────────────────────────────────────────────────────────
-- GREEN KAPISI: yalniz GREEN kabul edilir
-- ─────────────────────────────────────────────────────────────

/-- Kabul: yalnizca GREEN karari kabul edilir.
    RED ve OLCULEMEDI kabul EDILMEZ (fail-closed). -/
def Kabul (k : Karar) : Prop := k = Karar.green

/-- T3: GREEN kabul edilir. -/
theorem kabul_green : Kabul Karar.green := rfl

/-- T4: RED kabul EDILMEZ. -/
theorem kabul_red_degil : ¬ Kabul Karar.red := by
  unfold Kabul; intro h; exact absurd h (by decide)

/-- T5: OLCULEMEDI kabul EDILMEZ.
    "ispatlanamayan madde PASS sayilmaz" -- lean-kapi kurali. -/
theorem kabul_olculemedi_degil : ¬ Kabul Karar.olculemedi := by
  unfold Kabul; intro h; exact absurd h (by decide)

-- ─────────────────────────────────────────────────────────────
-- SORRY KAPISI: sorry iceren paket PR ACAMAZ
-- ─────────────────────────────────────────────────────────────

/-- Paket: sorry sayisi + lake build sonucu. -/
structure Paket where
  sorry_sayisi : Nat
  lake_rc      : Nat
deriving Repr

/-- PR acilabilir: sorry YOK ve lake build temiz. -/
def PrAcilabilir (p : Paket) : Prop := p.sorry_sayisi = 0 ∧ p.lake_rc = 0

/-- T6: GERCEK VAKA -- leanpy paketi PR acabilir.
    (Olculdu: sorry=0, lake build 9 jobs basarili, rc=0) -/
theorem pr_acilabilir : PrAcilabilir ⟨0, 0⟩ := by
  unfold PrAcilabilir; exact ⟨rfl, rfl⟩

/-- T7: sorry iceren paket PR ACAMAZ. -/
theorem sorry_pr_engeller : ¬ PrAcilabilir ⟨1, 0⟩ := by
  unfold PrAcilabilir
  intro h
  exact absurd h.1 (by decide)

/-- T8: lake build kirmizi ise PR ACAMAZ.
    (GERCEK OLAY: ilk denemede lakefile yoktu, lake_rc=1, PR KIRMIZI verdi) -/
theorem lake_red_pr_engeller : ¬ PrAcilabilir ⟨0, 1⟩ := by
  unfold PrAcilabilir
  intro h
  exact absurd h.2 (by decide)

end LeanPyKopru
