#!/bin/bash
read -p "Number" num
if [ "$num" -gt 3 ]; then
echo "Greater than 3"
elif [ "$num" -lt 3 ]; then
echo "Lesser than 3"
elif [ "$num" -eq 3 ]; then
echo "Equal to 3"
else
echo "User input is empty"
fi
