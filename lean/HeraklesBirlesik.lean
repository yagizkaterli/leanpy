-- ═══════════════════════════════════════════════════════════════
-- HERAKLES BIRLESIK INVARIANT SETI (reverse-engineered)
-- Kapsul: HERAKLES-GS-001
--
-- YAGIZ: "tum sistemi yapmis olduk bunu reverse engine edebiliriz"
--
-- YONTEM: 6 katmanin HER BIRINDEN invariant cikarildi — UYDURULMADI.
--   Her invariant o katmanin GERCEK kodundan/dosyasindan turetildi.
--   Kaynaklar her teoremin yaninda yazili.
--
-- ORTAK ILKE (5 bagimsiz katmanda AYNI sekilde goruldu):
--   BEYAN != OLCUM
--
-- Core Lean 4 (mathlib YOK).
-- ═══════════════════════════════════════════════════════════════

namespace HeraklesBirlesik

-- ─────────────────────────────────────────────────────────────
-- KATMAN 1: CONSTITUTION (BMH)
-- Kaynak: vault-life/02 Projects/Bilincin Makine Hali/constitution.md
-- ─────────────────────────────────────────────────────────────

/-- C1: hamlik seviyesi (0=dump en ham, 3=gemini). -/
structure Hamlik where
  seviye : Nat
deriving Repr

def Oncelikli (h : Hamlik) : Prop := h.seviye ≤ 3

/-- K1-T1: dump (0) en oncelikli. -/
theorem k1_en_ham_kazanir : Oncelikli ⟨0⟩ := by
  unfold Oncelikli; exact Nat.zero_le 3

/-- K1-T2: kamu katmani (4) ham DEGIL. -/
theorem k1_kamu_ham_degil : ¬ Oncelikli ⟨4⟩ := by
  unfold Oncelikli; intro h; exact absurd h (by decide)

/-- C2: katman + gorunurluk. -/
structure Katman where
  ad         : String
  gorunurluk : Bool
deriving Repr

def RawKatmani (k : Katman) : Prop := k.ad = "raw"
def Kamu (k : Katman) : Prop := k.gorunurluk = true
def Sizinti (k : Katman) : Prop := RawKatmani k ∧ Kamu k

/-- K1-T3: sizinti tanimi anlamli (bos degil). -/
theorem k1_sizinti_tanimli : Sizinti ⟨"raw", true⟩ := by
  unfold Sizinti RawKatmani Kamu; exact ⟨rfl, rfl⟩

-- ─────────────────────────────────────────────────────────────
-- KATMAN 2: GRAF (D2)
-- Kaynak: 380 .d2 -> BUYUK-RESIM-TAM.d2 (5844 dugum, 3606 kenar)
-- ─────────────────────────────────────────────────────────────

/-- Graf: dugum ve kenar sayisi. -/
structure Graf where
  dugum : Nat
  kenar : Nat
deriving Repr

/-- Kapsul-v2 ilkeldi: 0 KENAR. Graf olmak icin kenar ZORUNLU. -/
def GrafGecerli (g : Graf) : Prop := g.kenar > 0 ∧ g.dugum > 0

/-- K2-T1: GERCEK VAKA -- birlesik graf gecerli (5844 dugum, 3606 kenar). -/
theorem k2_birlesik_graf_gecerli : GrafGecerli ⟨5844, 3606⟩ := by
  unfold GrafGecerli
  exact ⟨by decide, by decide⟩

/-- K2-T2: GERCEK VAKA -- kapsul-v2 (0 kenar) GRAF DEGIL.
    Senin "kapsul cok ilkel" tespitinin formal karsiligi. -/
theorem k2_kapsulv2_graf_degil : ¬ GrafGecerli ⟨194, 0⟩ := by
  unfold GrafGecerli
  intro h
  exact absurd h.1 (by decide)

-- ─────────────────────────────────────────────────────────────
-- KATMAN 3: KOVAN (typed kalibrasyon)
-- Kaynak: kolonik-olcum -> 242 makbuz, hepsi kuru kip, 0 gercek kosum
-- ─────────────────────────────────────────────────────────────

/-- Oran gecerliligi: payda > 0 VE pay <= payda. -/
def OranGecerli (pay payda : Nat) : Prop := payda > 0 ∧ pay ≤ payda

/-- K3-T1: payda 0 -> oran GECERSIZ. -/
theorem k3_payda_sifir_gecersiz (pay : Nat) : ¬ OranGecerli pay 0 := by
  unfold OranGecerli; intro h; exact Nat.lt_irrefl 0 h.1

/-- K3-T2: GERCEK VAKA -- '%49 sahte-yesil' iddiasi payda hatasiydi.
    (typed_true=1001, gercek kosum=0 -> oran hesaplanamaz) -/
theorem k3_gercek_vaka_sahte_yesil : ¬ OranGecerli 1001 0 := k3_payda_sifir_gecersiz 1001

/-- K3-T3: pay > payda da GECERSIZ. -/
theorem k3_pay_asamaz (pay payda : Nat) (h : pay > payda) : ¬ OranGecerli pay payda := by
  unfold OranGecerli; intro hg; exact absurd hg.2 (Nat.not_le.mpr h)

-- ─────────────────────────────────────────────────────────────
-- KATMAN 4: FORGE KAPISI (kolonik-os)
-- Kaynak: cmd/kolonik-os/main.go:158-175 -- "iddia == falsifierli" ise GECTI
-- ─────────────────────────────────────────────────────────────

/-- Iddia sayimi. -/
structure Sayim where
  iddia       : Nat
  falsifierli : Nat
deriving Repr

def Tutarli (s : Sayim) : Prop := s.falsifierli ≤ s.iddia
def Gecti (s : Sayim) : Prop := s.iddia = s.falsifierli

/-- K4-T1: GECTI ise Tutarli. -/
theorem k4_gecti_ise_tutarli (s : Sayim) (h : Gecti s) : Tutarli s := by
  unfold Gecti at h; unfold Tutarli; rw [h]; exact Nat.le_refl s.falsifierli

/-- K4-T2: Tutarli ise falsifierli > iddia OLAMAZ. -/
theorem k4_falsifier_asamaz (s : Sayim) (h : Tutarli s) : ¬ (s.falsifierli > s.iddia) := by
  unfold Tutarli at h; intro hc; exact absurd hc (Nat.not_lt.mpr h)

/-- K4-T3: GERCEK VAKA -- Python bozuk cikti ⟨2,4⟩ Tutarli DEGIL.
    (Olculdu: Python her dugumdeki falsifier'i saydi, iddia sinifini degil) -/
theorem k4_python_bozuk_reddedilir : ¬ Tutarli ⟨2, 4⟩ := by
  unfold Tutarli; intro h; exact absurd h (by decide)

/-- K4-T4: GERCEK VAKA -- bozuk kapsul (falsifier silindi) GECTI VEREMEZ.
    (Olculdu: kolonik-os KALDI verdi, iddia=2 falsifierli=0) -/
theorem k4_bozuk_kapsul_gecersiz : ¬ Gecti ⟨2, 0⟩ := by
  unfold Gecti; intro h; exact absurd h (by decide)

-- ─────────────────────────────────────────────────────────────
-- KATMAN 5: PANO (olcum.go)
-- Kaynak: olcum.go s171 -- "pano artik OLCUYOR, BEYAN ETMIYOR"
--   Koken bug: elle yazilan 3855 bayt vs gercek 3860 bayt
-- ─────────────────────────────────────────────────────────────

/-- Pano satiri: degeri OLCULDU mu yoksa BEYAN mi edildi? -/
structure PanoSatiri where
  etiket     : String
  olculdu    : Bool   -- true = dosyadan/komuttan geldi
  beyan      : Bool   -- true = elle yazildi
deriving Repr

/-- Gecerli pano satiri: OLCULDU ve BEYAN DEGIL. -/
def PanoGecerli (p : PanoSatiri) : Prop := p.olculdu = true ∧ p.beyan = false

/-- K5-T1: beyan edilen satir GECERSIZ -- koken bug tam buydu. -/
theorem k5_beyan_gecersiz : ¬ PanoGecerli ⟨"TYPE-CHECK rc=0", false, true⟩ := by
  unfold PanoGecerli
  intro h; exact Bool.noConfusion h.1

/-- K5-T2: olculen satir GECERLI. -/
theorem k5_olcum_gecerli : PanoGecerli ⟨"AKSON-NORON-K5 build", true, false⟩ := by
  unfold PanoGecerli; exact ⟨rfl, rfl⟩

-- ─────────────────────────────────────────────────────────────
-- KATMAN 6: KOLONI (herdr teslim)
-- Kaynak: 8/8 sentez kapsulu -> 5 canli uye (agent_prompted)
-- ─────────────────────────────────────────────────────────────

/-- Uye + teslim durumu. -/
structure Uye where
  ad      : String
  teslim  : Bool
deriving Repr

/-- Teslim orani: teslim sayisi <= uye sayisi. -/
def TeslimGecerli (teslim uye : Nat) : Prop := teslim ≤ uye

/-- K6-T1: GERCEK VAKA -- 8/8 teslim gecerli. -/
theorem k6_teslim_gecerli : TeslimGecerli 8 8 := by
  unfold TeslimGecerli; exact Nat.le_refl 8

/-- K6-T2: teslim > uye IMKANSIZ (uydurma teslim). -/
theorem k6_teslim_uyeyi_asamaz (t u : Nat) (h : t > u) : ¬ TeslimGecerli t u := by
  unfold TeslimGecerli; intro hg; exact absurd hg (Nat.not_le.mpr h)

-- ─────────────────────────────────────────────────────────────
-- ORTAK ILKE: BEYAN != OLCUM
-- 5 bagimsiz katmanda AYNI desen goruldu. Bu teorem onu birlestirir.
-- ─────────────────────────────────────────────────────────────

/-- Beyan edilen deger ile olculen deger AYNI MI? -/
structure Ikili where
  beyan   : Nat
  olcum   : Nat
deriving Repr

/-- Tutarli: beyan = olcum. -/
def BeyanOlcumTutarli (i : Ikili) : Prop := i.beyan = i.olcum

/-- ORTAK-T1: BEYAN != OLCUM ise tutarsiz -- sistemin her katmaninda
    ayni desen: pano (3855 vs 3860), kovan (1001 typed vs 0 gercek kosum). -/
theorem ortak_beyan_olcum_ayrisir (i : Ikili) (h : i.beyan ≠ i.olcum) :
    ¬ BeyanOlcumTutarli i := by
  unfold BeyanOlcumTutarli; intro hg; exact h hg

/-- ORTAK-T2: GERCEK VAKA -- pano koken bug.
    beyan=3855 bayt, olcum=3860 bayt -> TUTARSIZ. -/
theorem ortak_pano_bug_tutarsiz : ¬ BeyanOlcumTutarli ⟨3855, 3860⟩ := by
  unfold BeyanOlcumTutarli; intro h; exact absurd h (by decide)

/-- ORTAK-T3: GERCEK VAKA -- kovan sahte-yesil.
    beyan=1001 ('typed_true'), olcum=0 (gercek kosum) -> TUTARSIZ. -/
theorem ortak_kovan_sahte_tutarsiz : ¬ BeyanOlcumTutarli ⟨1001, 0⟩ := by
  unfold BeyanOlcumTutarli; intro h; exact absurd h (by decide)

end HeraklesBirlesik
