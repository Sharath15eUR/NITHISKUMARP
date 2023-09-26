#!/bin/bash
declare -a names2
names2=( "$1" "$2" "$3" "$4" "$5" "$6" "$7" )
echo -e "Extracting elements starting from position 2 : ${names2[@]:2:3}\n"
names2[2]='Debian'
echo -e "After replacing 3rd element with Debian : ${names2[@]}\n" 
names2=( "${names2[@]}" "Arun" )
echo -e "After adding an element  : ${names2[@]}" 

