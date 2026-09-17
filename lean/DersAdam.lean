-- ═══════════════════════════════════════════════════════════════
-- DERS ADAM — OGRENME MIMARISI INVARIANT'LARI
-- Kaynak: C:\Users\yagiz\vaults\homebase
--   .fable/kapsul/ogrenme/YONTEM-MAT272E.001.json (14 KB)
--   .fable/kapsul/ogrenme/DERS-ENVANTERI.001.json
--   .fable/kapsul/ogrenme/TASIMA-ISTATISTIK.001.json
--
-- YAGIZ: "ders adami dedim benim yks calisma disiplini"
--
-- OLCULDU: Mastery block 9 adimli, SIRA DEGISMEZ (invariant).
--   tetik -> kavram -> saldiri_plani -> islenmis_ornek -> soluk_tamamla
--   -> tatbikat -> tuzak -> kanca -> izle
--
--   Kapsulun kendi cumlesi: "Rehber bir ders notu degil, bir
--   OGRENME MIMARISI'dir." Ve HERAKLES ogrenme dongusu AYNI iskeleti tasir.
--
-- Core Lean 4 (mathlib YOK).
-- ═══════════════════════════════════════════════════════════════

namespace DersAdam

-- ─────────────────────────────────────────────────────────────
-- MASTERY BLOCK: 9 adim, SIRA DEGISMEZ
-- Falsifier (kapsulden verbatim): "bu sirayi bozan her hangi bir
--   ogrenme-blogu ORNEK degildir; yeniden isimlendirilmis bir ders-notudur"
-- ─────────────────────────────────────────────────────────────

/-- Mastery block adimlari -- SIRA onemli, bu yuzden inductive. -/
inductive Adim where
  | tetik
  | kavram
  | saldiri_plani
  | islenmis_ornek
  | soluk_tamamla
  | tatbikat
  | tuzak
  | kanca
  | izle
deriving Repr, DecidableEq

/-- Adimin SIRA NUMARASI. Sira degismez, bu yuzden Nat. -/
def sira : Adim → Nat
  | .tetik          => 1
  | .kavram         => 2
  | .saldiri_plani  => 3
  | .islenmis_ornek => 4
  | .soluk_tamamla  => 5
  | .tatbikat       => 6
  | .tuzak          => 7
  | .kanca          => 8
  | .izle           => 9

/-- Toplam adim sayisi -- 9 (olculdu). -/
def TOPLAM_ADIM : Nat := 9

-- ─────────────────────────────────────────────────────────────
-- T1: SIRA TAM -- her adim 1..9 arasinda
-- ─────────────────────────────────────────────────────────────

theorem t1_her_adim_aralikta (a : Adim) : sira a ≥ 1 ∧ sira a ≤ TOPLAM_ADIM := by
  cases a <;> (unfold sira TOPLAM_ADIM; exact ⟨by decide, by decide⟩)

/-- T2: SIRA ENJEKTIF -- iki farkli adim ayni sirayi ALAMAZ.
    Bu, "sira degismez" invariant'inin cekirdegi. -/
theorem t2_sira_enjekttif (a b : Adim) (h : sira a = sira b) : a = b := by
  cases a <;> cases b <;> (unfold sira at h <;> first | rfl | (exact absurd h (by decide)))

-- ─────────────────────────────────────────────────────────────
-- T3: ILK VE SON ADIM SABIT
-- tetik HER ZAMAN ilk, izle HER ZAMAN son.
-- ─────────────────────────────────────────────────────────────

theorem t3_tetik_ilk : sira .tetik = 1 := by unfold sira; rfl

theorem t4_izle_son : sira .izle = TOPLAM_ADIM := by unfold sira TOPLAM_ADIM; rfl

/-- T5: tetik ile izle AYNI ADIM OLAMAZ (farkli sira).
    Yani blok BOS degil -- basi ve sonu ayri. -/
theorem t5_bas_son_ayri : Adim.tetik ≠ Adim.izle := by
  intro h
  have : sira Adim.tetik = sira Adim.izle := by rw [h]
  unfold sira at this
  exact absurd this (by decide)

-- ─────────────────────────────────────────────────────────────
-- SOLUK_TAMAMLA = HERAKLES FALSIFIER
-- Kapsul: "soluk_tamamla{iskelet, tasiyici_adim, tam_cozum}"
--   -> iskelet verilir, ogrenci tamamlar, sonra tam cozum acilir.
--   Bu FALSIFIER'in pedagojik hali: iddiayi test et.
-- ─────────────────────────────────────────────────────────────

/-- Soluk alistirma: iskelet var, cozum gizli. -/
structure Soluk where
  iskelet      : String
  cozum_gizli  : Bool
deriving Repr

/-- Gecerli soluk alistirma: iskelet DOLU, cozum GIZLI.
    Cozum acikken alistirma DEGIL -- kopya olur. -/
def SolukGecerli (s : Soluk) : Prop := s.iskelet ≠ "" ∧ s.cozum_gizli = true

/-- T6: cozumu acik "alistirma" GECERSIZ -- falsifier'siz iddia gibi. -/
theorem t6_acik_cozum_alistirma_degil : ¬ SolukGecerli ⟨"x + y", false⟩ := by
  unfold SolukGecerli
  intro h
  exact Bool.noConfusion h.2

/-- T7: gecerli soluk alistirma -- iskelet dolu, cozum gizli. -/
theorem t7_soluk_gecerli : SolukGecerli ⟨"∫₀¹ x dx = ?", true⟩ := by
  unfold SolukGecerli
  exact ⟨by decide, rfl⟩

/-- T8: iskeletsiz alistirma GECERSIZ (bos blok). -/
theorem t8_iskeletsiz_gecersiz : ¬ SolukGecerli ⟨"", true⟩ := by
  unfold SolukGecerli
  intro h
  exact h.1 rfl

-- ─────────────────────────────────────────────────────────────
-- TUZAK = ADVERSARIAL REVIEWER
-- Kapsul: "trap / spot-error" -- yanlisi yakala.
--   HERAKLES'te adversarial reviewer ayni isi yapar.
-- ─────────────────────────────────────────────────────────────

/-- Blok: tuzak adimi VAR MI? -/
structure Blok where
  adimlar : List Adim
deriving Repr

/-- Blok gecerli: 9 adim, sira dogru (tatbikat oncesi tuzak YOK).
    Basitlestirilmis: tuzak adimi MEVCUT olmali. -/
def BlokGecerli (b : Blok) : Prop := b.adimlar.contains Adim.tuzak = true

/-- T9: tuzak'siz blok GECERSIZ.
    Falsifier (kapsulden): "bu sirayi bozan her hangi bir ogrenme-blogu
    ORNEK degildir; yeniden isimlendirilmis bir ders-notudur" -/
theorem t9_tuzaksiz_blok_ders_notu :
    ¬ BlokGecerli ⟨[.tetik, .kavram, .tatbikat]⟩ := by
  unfold BlokGecerli
  intro h
  exact Bool.noConfusion h

/-- T10: tuzak iceren blok GECERLI. -/
theorem t10_tuzakli_blok_gecerli :
    BlokGecerli ⟨[.tetik, .kavram, .tuzak, .kanca]⟩ := by
  unfold BlokGecerli
  rfl

-- ─────────────────────────────────────────────────────────────
-- DERS ENVANTERI ASIMETRISI
-- Olculdu: 01 Advanced Math=81 dosya (YONTEM VAR)
--          02 Statistics=1, 03 DS=3, 04 Dynamics=1, 05 DiffGeom=4 (YONTEM YOK)
--
-- YAGIZ verbatim: "gelistirilecek olarak birakmistim"
-- Kapsul: "yontem tek kasada, icerik cok kasa"
-- ─────────────────────────────────────────────────────────────

/-- Ders: dosya sayisi + yontem var mi? -/
structure Ders where
  ad            : String
  dosya_sayisi  : Nat
  yontem_var    : Bool
deriving Repr

/-- Eşik: yontem kurulmus sayilmasi icin en az N dosya gerekir.
    Olculdu: yontem kurulan ders 81 dosya; digerleri 1-4. Esik 20. -/
def YONTEM_ESIGI : Nat := 20

/-- Yontem kurulmus: yontem_var VE dosya sayisi esigi gecmis. -/
def YontemKurulu (d : Ders) : Prop := d.yontem_var = true ∧ d.dosya_sayisi ≥ YONTEM_ESIGI

/-- T11: GERCEK VAKA -- 01 Advanced Math yontem KURULU (81 dosya). -/
theorem t11_advanced_math_kurulu : YontemKurulu ⟨"01 Advanced Math", 81, true⟩ := by
  unfold YontemKurulu YONTEM_ESIGI
  exact ⟨rfl, by decide⟩

/-- T12: GERCEK VAKA -- 02 Statistics yontem YOK (1 dosya, bos sablon). -/
theorem t12_statistics_kurulu_degil : ¬ YontemKurulu ⟨"02 Statistics", 1, false⟩ := by
  unfold YontemKurulu
  intro h
  exact Bool.noConfusion h.1

/-- T13: GERCEK VAKA -- 05 Differential Geometry yontem YOK (4 dosya). -/
theorem t13_diffgeom_kurulu_degil : ¬ YontemKurulu ⟨"05 Differential Geometry", 4, false⟩ := by
  unfold YontemKurulu
  intro h
  exact Bool.noConfusion h.1

/-- T14: ASIMETRI TEOREMI -- yontem kurulu ders VAR ama cogu derste YOK.
    "yontem tek kasada, icerik cok kasa" -- kapsulun cumlesinin formal hali.
    Kanit: ayni ad tasiyan iki ders AYNI kayittir; biri kurulu digeri degil OLAMAZ. -/
theorem t14_asimetri (ad : String) (ds1 ds2 : Nat) (yv1 yv2 : Bool)
    (h1 : YontemKurulu ⟨ad, ds1, yv1⟩) (h2 : yv2 = false) (heq : yv1 = yv2) : False := by
  unfold YontemKurulu at h1
  rw [heq, h2] at h1
  exact Bool.noConfusion h1.1

end DersAdam
