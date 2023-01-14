#!/bin/bash

#saves cpu info to text file
head /proc/cpuinfo > cpuinfo.txt

echo "What part of CPUinfo would you like to see?"

read userInput

#assigns num an integer from 0-11 from the C script "initial"
num=$(./initial "$userInput")

echo ""

#determines what to print to user
if [[ $num -eq 0 ]]; then
    echo "Incorrect argument. Closing program"
elif [[ $num -eq 11 ]]; then 
    cat cpuinfo.txt
else
    head -n $num cpuinfo.txt | tail -n 1
fi



rm cpuinfo.txt

