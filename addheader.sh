#!/bin/bash
# Usage: addheader.sh [list of files to add header to]

for i in "$@"
do
    if ! grep -q Copyright $i
    then
        # get appropriate HEADER
        ext=${i##*.}
        cat HEADER.${ext} $i >$i.new && mv $i.new $i
    fi
done
