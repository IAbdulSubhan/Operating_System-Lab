#!/bin/bash
echo " what do you want"
read n
for i in $(ls *.txt)
do
echo $i
gedit $i
done