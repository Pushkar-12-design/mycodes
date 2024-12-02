
echo "Enter Ramesh's basic salary:"
read basic_salary


da=$(echo "0.40 * $basic_salary" | bc)


hra=$(echo "0.20 * $basic_salary" | bc)

gross_salary=$(echo "$basic_salary + $da + $hra" | bc)


echo "Ramesh's gross salary is: $gross_salary"

