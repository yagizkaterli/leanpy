#!/bin/bash
# LeanPy kendi benchmark'i -- mekanik sinav.
# Her sinav: (1) modul derlenir mi (2) sorry yok mu (3) teorem sayisi > 0
set -u
export PATH=/root/.elan/bin:$PATH
D="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)/lean"
GECEN=0; TOPLAM=0
for f in "$D"/*.lean; do
  MOD=$(basename "$f" .lean)
  [ "$MOD" = "lakefile" ] && continue
  TOPLAM=$((TOPLAM+1))
  # 1) derlenir mi
  if ! timeout 120 lean "$D/$MOD.lean" >/dev/null 2>&1; then
    echo "RED  $MOD: derlenmedi"
    continue
  fi
  # 2) sorry taktigi var mi (yorum disi)
  S=$(grep -v '^\s*--' "$f" | grep -c 'sorry\|admit' || true)
  if [ "$S" != "0" ]; then
    echo "RED  $MOD: $S sorry/admit"
    continue
  fi
  # 3) teorem sayisi
  T=$(grep -c '^theorem' "$f" || true)
  if [ "$T" = "0" ]; then
    echo "RED  $MOD: teorem yok"
    continue
  fi
  echo "GECTI $MOD ($T teorem)"
  GECEN=$((GECEN+1))
done
echo "SONUC: $GECEN/$TOPLAM"
[ "$GECEN" = "$TOPLAM" ] && exit 0 || exit 1
