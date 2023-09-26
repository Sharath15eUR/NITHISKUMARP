#!/bin/bash
read -p "Name : " nme
if [ $nme == $USER ]; then
echo "Hello"
else
echo "Try again"
fi
