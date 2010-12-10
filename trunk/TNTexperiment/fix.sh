#!/bin/bash
if [ -z "$1" ]; then
        echo "usage: $0 [logfile]"
        exit
fi
awk '$0 !~ /^$/ {printf "%s:", $0}' $1 | awk '{gsub(/:[0-9]+\|/, ""); print}' | awk '{gsub(/[^0-9A-Z_]/, ""); print}' | perl -pe 's/([A-Z_])([0-9])/\1\n\2/g' | perl -pe 's/([0-9])([A-Z_])/\1 \2/g'
