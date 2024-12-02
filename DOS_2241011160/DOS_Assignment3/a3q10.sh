
echo "Enter a day:"
read day


day=$(echo "$day" | tr '[:upper:]' '[:lower:]')


case $day in
    monday)
        echo "DOS class time: 10:00 AM - 11:00 AM, Room: 101"
        ;;
    tuesday)
        echo "DOS class time: 11:00 AM - 12:00 PM, Room: 102"
        ;;
    wednesday)
        echo "DOS class time: 12:00 PM - 1:00 PM, Room: 103"
        ;;
    thursday)
        echo "DOS class time: 1:00 PM - 2:00 PM, Room: 104"
        ;;
    friday)
        echo "DOS class time: 2:00 PM - 3:00 PM, Room: 105"
        ;;
    saturday)
        echo "No class on Saturday"
        ;;
    sunday)
        echo "Holiday"
        ;;
    *)
        echo "Invalid day entered"
        ;;
esac


