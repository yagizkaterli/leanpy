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

def nand (a b : Bool) : Bool := !(a && b)

theorem and_nand (a b : Bool) : (a && b) = !(nand a b) := by
  simp [nand]

theorem nand_false_left (b : Bool) : nand false b = true := by
  simp [nand]

end PCA.AksonNoron
