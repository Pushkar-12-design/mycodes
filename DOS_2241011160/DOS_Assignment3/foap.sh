
echo "Enter the first number:"
read num1
echo "Enter the second number:"
read num2

sum=$(echo "$num1 + $num2" | bc)
difference=$(echo "$num1 - $num2" | bc)
product=$(echo "$num1 * $num2" | bc)
quotient=$(echo "scale=2; $num1 / $num2" | bc)


echo "Sum: $sum"
echo "Difference: $difference"
echo "Product: $product"
echo "Quotient: $quotient"

