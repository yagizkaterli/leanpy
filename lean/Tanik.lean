-- CB-LPP-001 — TANIK ESIGI MODELI
-- Python'un urettigi (bulunan, toplam) ciftinin kabul edilebilirligi.
-- Kanitlanan sey: PYTHON DEGIL, somut sonucun invariantlari.

namespace CB.LPP001

/-- Esik: 5 imzanin en az 3'u gorulduyse TUTTU (0.6 = 3/5).
    Tamsayi aritmetigi -- kesir yok, yuvarlama yok, float yok. -/
def tuttu (bulunan toplam : Nat) : Bool :=
  decide (5 * bulunan >= 3 * toplam) && decide (toplam > 0)

/-- INVARYANT 1: hicbir imza bulunamazsa TUTMADI. -/
theorem sifir_bulunan_red (toplam : Nat) : tuttu 0 toplam = false := by
  unfold tuttu
  cases toplam <;> simp

/-- INVARYANT 2: hepsi bulunursa TUTTU (toplam > 0 iken). -/
theorem hepsi_bulundu_kabul (toplam : Nat) (h : toplam > 0) : tuttu toplam toplam = true := by
  unfold tuttu
  simp only [ge_iff_le, Bool.and_eq_true, decide_eq_true_eq]
  omega

/-- INVARYANT 3 (MONOTONLUK, DOGRU YON): bulunan sayisi ARTTIKCA kabul korunur.
    Lean ilk yazdigim ters yonu CURUTTU (karsi ornek uretti) -- bu, kanitin
    kendi iddiamizi duzelttigi yerdir. -/
theorem monotonluk (b1 b2 toplam : Nat) (h : b1 <= b2) :
    tuttu b1 toplam = true -> tuttu b2 toplam = true := by
  unfold tuttu
  simp only [ge_iff_le, Bool.and_eq_true, decide_eq_true_eq]
  omega

/-- INVARYANT 4: toplam imza sayisi sifirsa kabul YOK (bos kume uzerinde yalan). -/
theorem bos_kume_red : tuttu 0 0 = false := by
  unfold tuttu; simp

end CB.LPP001
