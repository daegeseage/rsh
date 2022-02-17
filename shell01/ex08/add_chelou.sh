#!/usr/local/bin/bash
export FT_NBR1=\\\'?\"\\\"\'\\
export FT_NBR2=rcrdmddd
FT_NBR2=$(sed 's/m/1/g' <<< "$FT_NBR2" | sed 's/r/2/g' | sed 's/d/3/g' | sed 's/o/4/g' | sed 's/c/5/g')
FT_NBR1=$(sed "s/\'/1/g" <<< "$FT_NBR1" | sed 's/\\/2/g' | sed 's/\"/3/g' | sed 's/?/4/g' | sed 's/!/5/g')
SUM=$(($FT_NBR1 + $FT_NBR2))
SUM=$(sed "s/1/g/g" <<< "$SUM"| sed 's/2/t/g' | sed 's/3/a/g' | sed 's/4/i/g' | sed 's/5/o/g' | sed 's/6/ /g')
echo $FT_NBR1 $FT_NBR2 $SUM
#$(( FT_NBR3 + FT_NBR4 )) 
