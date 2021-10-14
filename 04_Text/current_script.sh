#!/bin/bash

filename='asc2_archive.txt'
filesize=$(stat -c%s "$filename")

text=$(   cat asc2_archive.txt   )


row=0
col=0
clear
indexes=($(    seq $filesize | shuf   ))
#echo  $indexes
for i in "${indexes[@]}" ; do
    row=0
    col=0
    #echo "---------------------------------------------------------"
    index=$"(($i))" 
    for (( j=0; j<$index; j++ )); do
        col=$((col+1))
        line=${text:$j:1}
        case $line in (*[$'\n']*)
            row=$((row+1))
            col=0
        esac

        #if [[ -e $line ]]; then
            #echo "KEK"
         #   row=$((row+1))
         #   col=0
        #fi
    done
    #echo "ROW"
    #echo $row
    #echo "COL"
    #echo $col
    sleep $1
    tput cup $row $col
    echo -n "${text:${i}:1}"
    #echo "---------------------------------------------------------"
done

#clear

#tput cup 5 20
#echo "KEK"
