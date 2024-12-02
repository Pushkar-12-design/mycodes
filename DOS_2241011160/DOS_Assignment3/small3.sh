
if [ $# -ne 3 ]; then
    echo "Usage: $0 num1 num2 num3"
    exit 1
fi


num1=$1
num2=$2
num3=$3

smallest=$num1

if [ $num2 -lt $smallest ]; then
    smallest=$num2
fi

if [ $num3 -lt $smallest ]; then
    smallest=$num3
fi


echo "The smallest number is: $smallest"

