#!/usr/local/bin/bash
export FT_NBR1=\\\'?\"\\\"\'\\
export FT_NBR2='rcrdmddd'
FT_NBR2=$(sed 's/m/0/g' <<< "$FT_NBR2" | sed 's/r/1/g' | sed 's/d/2/g' | sed 's/o/3/g' | sed 's/c/4/g')
FT_NBR1=$(sed "s/\'/0/g" <<< "$FT_NBR1" | sed 's/\\/1/g' | sed 's/\"/2/g' | sed 's/?/3/g' | sed 's/!/4/g')
FT_NBR1=$(echo $((5#"$FT_NBR1")))
FT_NBR2=$(echo $((5#"$FT_NBR2")))
SUM=$((FT_NBR1 + FT_NBR2))
SUM=$(echo 'ibase=10; obase=13; '$SUM'' | bc)
SUM=$(sed "s/0/g/g" <<< "$SUM"| sed 's/1/t/g' | sed 's/2/a/g' | sed 's/3/i/g' | sed 's/4/o/g' | sed 's/5/ /g'| sed 's/6/l/g' | sed 's/7/u/g' | sed 's/8/S/g' | sed 's/9/n/g' | sed 's/A/e/g' | sed 's/B/m/g' | sed 's/C/f/g')
echo "$SUM"
