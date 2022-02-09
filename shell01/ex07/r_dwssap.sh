FT_LINE1='7'
FT_LINE2='15'
COUNT=$(expr $FT_LINE2 - $FT_LINE1)
cat /etc/passwd | grep -v '#' | awk 'NR%2' | head -n $FT_LINE2 | tail -n $COUNT | awk -F ':' '{print $1}' | rev | sort -r | tr "\n" , | sed s/$/./g 
