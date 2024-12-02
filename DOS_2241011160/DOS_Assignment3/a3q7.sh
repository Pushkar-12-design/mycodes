
echo "Enter internal mark:"
read internal_mark
echo "Enter percentage in attendance:"
read attendance_percentage


if [ "$internal_mark" -ge 20 ] && [ "$attendance_percentage" -ge 75 ]; then
    echo "Allowed for Semester"
else
    echo "Not allowed"
fi

