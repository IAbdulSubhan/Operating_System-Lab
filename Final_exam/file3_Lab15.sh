#!/bin/bash
echo "Enter a number"
read a
b=$a
fact=1
while [ $a -ne 1 ]
do
	fact=$((fact * a))
	a=$((a - 1))
done
echo "Factorial of $b is: $fact"

