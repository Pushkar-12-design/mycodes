#include <stdio.h>

// Function prototype
double fast_food_billions(int year);

int main() {
    int year;
    printf("Enter a year after 2005 (or a year before 2005 to stop): ");
    while (scanf("%d", &year) && year > 2005) {
        double prediction = fast_food_billions(year);
        printf("Predicted fast food charges in %d: $%.2f billion\n", year, prediction);
        printf("Enter another year after 2005 (or a year before 2005 to stop): ");
    }
    printf("Program stopped.\n");
    return 0;
}

// Function definition
double fast_food_billions(int year) {
    int t = year - 2005;
    return 33.2 + 16.8 * t;
}
