#!/bin/bash
add()
{
c=`expr $1 + $2`

return $c
}
add 5 10
b=$?

echo "addition = $b"
