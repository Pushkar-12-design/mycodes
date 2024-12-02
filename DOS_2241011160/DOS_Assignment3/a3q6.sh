
year=${1:-$(date +%Y)}


result=$(( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 1 : 0 ))

[ $result -eq 1 ] && echo "$year is a leap year." || echo "$year is not a leap year."

