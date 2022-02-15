#!/usr/local/bin/bash
grep -v "#" < /etc/passwd | awk 'NR%2' | awk -F ':' '{print $1}' | rev | sort -r | head -n "$FT_LINE2" | tail -n "$(( FT_LINE2 - FT_LINE1 + 1 ))" | tr "\n" "," | sed 's/$/./g' 
