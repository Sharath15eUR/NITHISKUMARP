#!/bin/bash
declare -a names
names=( "$1" "$2" "$3" "$4" "$5" "$6" "$7" )
echo -e "Total number of elements in names is : ${#names[@]}\n"
echo -e "All the elements are : ${names[@]}\n"
echo -e "The 5th element is : ${names[4]}"

