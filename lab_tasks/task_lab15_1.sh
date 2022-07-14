#!/bin/bash
touch my_2nd_file.c

cat myfirstfile.c > my_2nd_file.c
echo "enter your choice"
echo "1 or 2 or 3"
read ch

echo "1 or 2 or 3"


case $ch in
1) gcc my_2nd_file.c -o ./my_2nd_file;;
2) gcc my_2nd_file.c -o my_2nd_file && ./my_2nd_file;;
3) cat my_2nd_file.c;;
*) ls;;
esac
