#!/bin/bash
if [ -z "$1" ]; then
        echo "usage: $0 [logfile]"
        exit
fi
awk '$0 !~ /^$/ {printf "%s:", $0}' $1 | awk '{gsub(/:[0-9]+\|/, ""); sub(/^[0-9]+\|/, ""); print}' | awk '{gsub(/[^0-9A-Z_]/, ""); print}' | perl -pe 's/([A-Z_])([0-9])/\1\n\2/g' | perl -pe 's/([0-9])([A-Z_])/\1 \2/g'|cut -d 'm' -f 1 | cut -d 's' -f 1| sort -n | grep 'STATE' > temp

i=`grep -n '^[1-9][0-9][0-9] ' temp |sed 1q|cut -d ':' -f 1`
j=`grep -n '^36[0-9][0-9][0-9][0-9][0-9] ' temp|sed 1q|cut -d ':' -f 1`
#i=$((i-1))
j=$((j+1))
echo $i
echo $j

if [ "$j" -le "$i" ]; then
        j=`grep -n '^3[0-9][0-9][0-9][0-9][0-9][0-9] ' temp|sed 1q|cut -d ':' -f 1`
        j=$((j+1))
fi


if [ "$j" -le "$i" ]; then
        j=`grep -n '^10176[0-9][0-9] ' temp|sed 1q|cut -d ':' -f 1`
        j=$((j+1))
fi

if [ "$j" -le "$i" ]; then
        j=`grep -n '^[1-3][0-9][0-9][0-9][0-9][0-9][0-9] ' temp|sed 1q|cut -d ':' -f 1`
        j=$((j+1))
fi
        


j=$((j-1))
echo $j
awk -v j=$j i=$i 'NR==i, NR==j' temp

