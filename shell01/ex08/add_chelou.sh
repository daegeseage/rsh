#!/usr/local/bin/bash
#sed 's/m/1/g' <<< "$FT_NBR2" | sed 's/r/2/g' | sed 's/d/3/g' | sed 's/o/4/g' | sed 's/c/5/g' #>>> "$FT_NBR3"
#sed 's/\'/1/g' <<< "$FT_NBR1" | sed 's/\\/2/g' | sed 's/\"/3/g' | sed 's/?/4/g' | sed 's/!/5/g' #>>> "$FT_NBR4" 
#echo $FT_NBR1 $FT_NBR2 $FT_NBR3 $FT_NBR4
sed 's/m/1/g' <<< "$FT_NBR2" | sed 's/r/2/g' | sed 's/d/3/g' | sed 's/o/4/g' | sed 's/c/5/g' ;
sed "s/\'/1/g" <<< "$FT_NBR1" | sed 's/\\/2/g' | sed 's/\"/3/g' | sed 's/?/4/g' | sed 's/!/5/g'
#echo $FT_NBR3 $FT_NBR4; $(( FT_NBR3 + FT_NBR4 )) 
