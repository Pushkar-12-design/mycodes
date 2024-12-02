#!/bin/bash

# Check if exactly three arguments are passed
if [ $# -ne 3 ]; then
    echo "Invalid input"
    echo "Enter input in the following format: op1 operator op2"
    exit 1
fi

# Assign command line arguments to variables
op1=$1
operator=$2
op2=$3

# Perform the arithmetic operation based on the operator
case $operator in
    +)
        result=$(echo "$op1 + $op2" | bc)
        ;;
    -)
        result=$(echo "$op1 - $op2" | bc)
        ;;
    x)
        result=$(echo "$op1 * $op2" | bc)
        ;;
    /)
        result=$(echo "scale=2; $op1 / $op2" | bc)
        ;;
    %)
        result=$(echo "$op1 % $op2" | bc)
        ;;
    ^)
        result=$(echo "$op1 ^ $op2" | bc)
        ;;
    *)
        echo "Invalid input"
        echo "Enter input in the following format: op1 operator op2"
        exit 1
        ;;
esac

# Display the result
echo "$op1 $operator $op2 = $result"

