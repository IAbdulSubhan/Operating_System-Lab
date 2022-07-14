#!/bin/bash
touch my_2nd_file.c++

cat myfirstfile.c++ > my_2nd_file.c++

#!/bin/bash
touch my_2nd_file.c
cat myfirstfile.c > my_2nd_file.c
ch1='y'

echo "Please Choose: "
echo "1 Just Compile"
echo "2 Compile And Run"
echo "3 Print Content of File"
echo " Current Files in Directory"
echo "===============================
"
read ch
if [ $ch -eq 1 ]
then
        gcc my_2nd_file.c -o my_2nd_file
else if [ $ch -eq 2 ]
then
        gcc my_2nd_file.c -o my_2nd_file
        ./my_2nd_file
else if [ $ch -eq 3 ]
then
        cat my_2nd_file.c
else
        ls
fi
fi
fi
