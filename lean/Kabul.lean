import AksonNoron

namespace PCA.AksonNoron

/-- Esik altinda dagitim tek hedeftir; dolayisiyla dagitilan sayi 1'dir. -/
theorem esik_alti_dagitilan_bir (s : Sabit) (n : Nat) (h : n ≤ s.esik) :
    dagitilan s Kaynak.kurator n = 1 := by
  apply tekhedef_dagitilan
  exact esik_alti_tek_hedef s n h

/-- Uye kaynaginda dagitim sayisi her girdide 1'dir. -/
theorem uye_dagitilan_bir (s : Sabit) (n : Nat) :
    dagitilan s Kaynak.uye n = 1 := by
  apply tekhedef_dagitilan
  exact uye_her_zaman_tek_hedef s n

end PCA.AksonNoron
