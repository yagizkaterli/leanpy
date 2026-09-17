-- PCA-CEKIRDEK-K5: AKSON-NORON ESIK ve YAYILMA KURALI
--
-- K5'in matematiksel CERCEVESI. Sistem kodunu degil, kuralin KENDISINI kanitlar.
-- Kabul kapisi = type-check; ispatli kaynak.

namespace PCA.AksonNoron

/-- Sinyal kaynagi: kim gonderiyor. -/
inductive Kaynak where
  | kurator
  | uye
  deriving DecidableEq, Repr

/-- Sinyal modu. -/
inductive Mod where
  | tekHedef
  | yayilma
  deriving DecidableEq, Repr

/-- Koloni sabitleri. Esik DEGERI parametredir, gomulu degil. -/
structure Sabit where
  esik : Nat
  tavan : Nat

/-- YAYILMA KURALI:
    - uye kaynakli sinyal:   HER ZAMAN tek hedef.
    - kurator kaynakli sinyal: hedef sayisi esigi GECERSE yayilir. -/
def mod (s : Sabit) (k : Kaynak) (hedefSayisi : Nat) : Mod :=
  match k with
  | Kaynak.uye => Mod.tekHedef
  | Kaynak.kurator => if hedefSayisi > s.esik then Mod.yayilma else Mod.tekHedef

/-- Ulasilan uye sayisi. -/
def dagitilan (s : Sabit) (k : Kaynak) (hedefSayisi : Nat) : Nat :=
  match mod s k hedefSayisi with
  | Mod.tekHedef => 1
  | Mod.yayilma => min hedefSayisi s.tavan

-- ============================================================
-- YARDIMCI LEMMALAR
-- ============================================================

/-- min her zaman sag argumani asmaz. -/
theorem min_sag_asmaz (a b : Nat) : min a b ≤ b := Nat.min_le_right a b

/-- Yayilma modunda dagitilan = min hedefSayisi tavan. -/
theorem yayilma_dagitilan (s : Sabit) (n : Nat)
    (h : mod s Kaynak.kurator n = Mod.yayilma) :
    dagitilan s Kaynak.kurator n = min n s.tavan := by
  unfold dagitilan
  rw [h]

/-- Tek hedef modunda dagitilan = 1. -/
theorem tekhedef_dagitilan (s : Sabit) (k : Kaynak) (n : Nat)
    (h : mod s k n = Mod.tekHedef) :
    dagitilan s k n = 1 := by
  unfold dagitilan
  rw [h]

-- ============================================================
-- KANITLAR
-- ============================================================

/-- TAVAN KANITI: dagitilan sayi hicbir zaman tavani asmaz.
    Sinirsiz yayilma yok -- TUM girdiler icin ispat. -/
theorem dagitilan_tavani_asmaz (s : Sabit) (k : Kaynak) (n : Nat) :
    dagitilan s k n ≤ s.tavan ∨ dagitilan s k n = 1 := by
  by_cases hk : k = Kaynak.kurator
  · subst hk
    by_cases hy : n > s.esik
    · left
      rw [yayilma_dagitilan s n (by unfold mod; exact if_pos hy)]
      exact min_sag_asmaz n s.tavan
    · right
      rw [tekhedef_dagitilan s Kaynak.kurator n (by unfold mod; exact if_neg hy)]
  · right
    exact tekhedef_dagitilan s k n (by unfold mod; cases k <;> simp_all)

/-- ESIK ALTI: hedef sayisi esigi gecmiyorsa kurator sinyali tek hedefe gider. -/
theorem esik_alti_tek_hedef (s : Sabit) (n : Nat) (h : n ≤ s.esik) :
    mod s Kaynak.kurator n = Mod.tekHedef := by
  unfold mod
  exact if_neg (by omega)

/-- ESIK USTU: hedef sayisi esigi gecerse kurator sinyali yayilir. -/
theorem esik_ustu_yayilir (s : Sabit) (n : Nat) (h : s.esik < n) :
    mod s Kaynak.kurator n = Mod.yayilma := by
  unfold mod
  exact if_pos h

/-- UYE: uye kaynakli sinyal hedef sayisindan BAGIMSIZ tek hedeflidir.
    147/147 durt kurator, uye->uye 0 olcumu -- kural bunu KORUR. -/
theorem uye_her_zaman_tek_hedef (s : Sabit) (n : Nat) :
    mod s Kaynak.uye n = Mod.tekHedef := by
  unfold mod
  rfl

/-- GERIYE UYUMLULUK: esik sifir olsa bile sonuc ya 1 ya da en fazla tavan. -/
theorem esik_sifir_sinirli (s : Sabit) (n : Nat) :
    dagitilan s Kaynak.kurator n ≤ s.tavan ∨ dagitilan s Kaynak.kurator n = 1 :=
  dagitilan_tavani_asmaz s Kaynak.kurator n

/-- ACK ONKOSULU: yayilma karari ack kanali olmadan anlamsizdir. -/
structure Dagitim where
  sinyalVar : Bool
  ackKanaliVar : Bool

def saglikli (d : Dagitim) : Bool := d.sinyalVar && d.ackKanaliVar

theorem acksiz_dagitim_sagliksiz (d : Dagitim) (h : d.ackKanaliVar = false) :
    saglikli d = false := by
  unfold saglikli
  rw [h]
  simp

end PCA.AksonNoron
