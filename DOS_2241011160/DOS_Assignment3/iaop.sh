#!/bin/bash

# Prompt the user to enter the first number
echo "Enter the first number:"
read a

# Prompt the user to enter the second number
echo "Enter the second number:"
read b

# Perform the arithmetic operations
echo "Sum: $(expr $a + $b)"
echo "Difference: $(expr $a - $b)"
echo "Product: $(expr $a \* $b)" # Use \* to avoid shell expansion
echo "Quotient: $(expr $a / $b)"
echo "Remainder: $(expr $a % $b)"
