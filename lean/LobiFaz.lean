-- ═══════════════════════════════════════════════════════════════
-- LOBI FAZ ZINCIRI + FAZ 1 TIKACI (session capismasi)
-- Kapsul: LEANPY-LOBI-URETIM-MAKINESI-BAGLA-001
--
-- KAYNAK (olculdu, sistemden arandi):
--   /root/vault-homebase/02 Projects/lobi/[C] LOBI-URETIM-MAKINESI-spec.md
--   .fable/kapsul/gelen/LOBI-URETIM-MAKINESI-FAZ1-s147.json
--
-- YAGIZ verbatim (spec madde 1):
--   "onemli olan lobinin kabilelerle kendi kendilerine kullanilip insaa
--    edilebilmesi; lobi zaten proje uretme makinesi olacak."
--
-- OLCULEN TIKAC (spec 2.1 -- EN AGIR):
--   "Session token her kullanimda doner ve MCP sunucusu ayni token'i tutar.
--    Ikinci cagiran SIGNED IN ELSEWHERE alir, birincisi dusurulur."
--   "SONUC: KABILELER LOBI YI PAYLASARAK KULLANAMAZ."
--
-- Core Lean 4 (mathlib YOK).
-- ═══════════════════════════════════════════════════════════════

namespace LobiFaz

-- ─────────────────────────────────────────────────────────────
-- FAZ 1 TIKACI: SESSION CAPISMASI
-- Spec: "Ikinci cagiran SIGNED IN ELSEWHERE alir, birincisi dusurulur."
-- Yani: en fazla BIR aktif oturum. IKINCI oturum = birincinin dususu.
-- ─────────────────────────────────────────────────────────────

/-- Aktif oturum sayisi. -/
structure Oturum where
  aktif : Nat
deriving Repr

/-- FAZ 1 GATE: en fazla BIR aktif oturum.
    Bu invariant saglanmiyorsa kabileler lobi'yi paylasarak kullanamaz
    (spec 2.1 tespiti). -/
def Faz1Gecerli (o : Oturum) : Prop := o.aktif ≤ 1

/-- T1: tek oturum GECERLI (bugunku durum). -/
theorem faz1_tek_oturum : Faz1Gecerli ⟨1⟩ := by
  unfold Faz1Gecerli; decide

/-- T2: iki oturum GECERSIZ -- SIGNED IN ELSEWHERE tikaci.
    Spec'in "KABILELER LOBI YI PAYLASARAK KULLANAMAZ" cumlesinin formal hali. -/
theorem faz1_iki_oturum_capisma : ¬ Faz1Gecerli ⟨2⟩ := by
  unfold Faz1Gecerli; decide

/-- T3: bos oturum da gecerli (kimse bagli degil). -/
theorem faz1_bos_oturum : Faz1Gecerli ⟨0⟩ := by
  unfold Faz1Gecerli; decide

-- ─────────────────────────────────────────────────────────────
-- FAZ ZINCIRI: TEKIL BAGIMLILIK
-- Spec: "FAZ 1 dusurulurse hicbiri kalmiyor (tekil bagimlilik).
--        'Once kartlari lobi'ye tasiyalim' refleksi YANLISTIR."
-- ─────────────────────────────────────────────────────────────

/-- FAZ durumu: 5 faz, her biri tamam mi? -/
structure FazDurum where
  faz1 : Bool
  faz2 : Bool
  faz3 : Bool
  faz4 : Bool
  faz5 : Bool
deriving Repr

/-- Bir faz, ANCAK oncesi tamamsa gecerli.
    (tekil bagimlilik: faz n -> faz n-1) -/
def FazGecerli (f : FazDurum) : Prop :=
  (f.faz2 = true → f.faz1 = true) ∧
  (f.faz3 = true → f.faz2 = true) ∧
  (f.faz4 = true → f.faz3 = true) ∧
  (f.faz5 = true → f.faz4 = true)

/-- T4: yalniz FAZ 5 -- GECERSIZ.
    Spec: "FAZ 5 yalniz tutulursa TASIMIYOR -- kimlik olmadan oda paylasilamaz." -/
theorem faz5_yalniz_tasimiyor : ¬ FazGecerli ⟨false, false, false, false, true⟩ := by
  unfold FazGecerli; decide

/-- T5: FAZ 1 + FAZ 2 -- GECERLI (sirayla). -/
theorem faz1_2_gecerli : FazGecerli ⟨true, true, false, false, false⟩ := by
  unfold FazGecerli; decide

/-- T6: FAZ 2 ama FAZ 1 yok -- GECERSIZ (atlama yasak). -/
theorem faz2_faz1siz_gecersiz : ¬ FazGecerli ⟨false, true, false, false, false⟩ := by
  unfold FazGecerli; decide

/-- T7: hepsi tamam -- GECERLI (tam zincir). -/
theorem tam_zincir_gecerli : FazGecerli ⟨true, true, true, true, true⟩ := by
  unfold FazGecerli; decide

/-- T8: GERCEK VAKA -- bugunku durum.
    Spec OLCUMU: "FAZ 1 hicbir karta baglanmadi. d-1087 numarasi baska ise
    gitti. Spec 30 Tem'den beri GECERSIZ durumda."
    Yani HICBIR FAZ kartli degil -> tum fazlar false. -/
theorem bugun_hicbir_faz_kartli_degil :
    FazGecerli ⟨false, false, false, false, false⟩ := by
  unfold FazGecerli; decide

/-- T9: BAGIMSIZLIK TEOREMI -- FAZ 1 dusurse digerleri GECERSIZ olur.
    Spec: "FAZ 1 dusurulurse hicbiri kalmiyor."
    Kanit: Bool degerlerini case-split ile aciyoruz. -/
theorem faz1_duserse_hicbiri (f : FazDurum) (h1 : f.faz1 = false)
    (h : FazGecerli f) : f.faz5 = false := by
  unfold FazGecerli at h
  obtain ⟨h21, h32, h43, h54⟩ := h
  -- faz5 = true ise faz4 = true, faz3, faz2, faz1 = true -- ama faz1 = false
  cases h5 : f.faz5 with
  | false => rfl
  | true =>
    have h4 : f.faz4 = true := h54 h5
    have h3 : f.faz3 = true := h43 h4
    have h2 : f.faz2 = true := h32 h3
    have h1' : f.faz1 = true := h21 h2
    rw [h1] at h1'
    exact Bool.noConfusion h1'

end LobiFaz
