#include <stdio.h>

int main() {
    int weekday_minutes, night_minutes, weekend_minutes;
    double flat_rate = 39.99, additional_minute_cost = 0.40, tax_rate = 0.0525;
    int free_minutes = 600, additional_minutes, total_minutes;
    double pretax_bill, taxes, total_bill, average_cost_per_minute;

    printf("Enter the number of weekday minutes used: ");
    scanf("%d", &weekday_minutes);
    printf("Enter the number of night minutes used: ");
    scanf("%d", &night_minutes);
    printf("Enter the number of weekend minutes used: ");
    scanf("%d", &weekend_minutes);

    additional_minutes = (weekday_minutes > free_minutes) ? (weekday_minutes - free_minutes) : 0;
    pretax_bill = flat_rate + (additional_minutes * additional_minute_cost);
    taxes = pretax_bill * tax_rate;
    total_bill = pretax_bill + taxes;
    total_minutes = weekday_minutes + night_minutes + weekend_minutes;
    average_cost_per_minute = (total_minutes > 0) ? (pretax_bill / total_minutes) : 0;

    printf("\n--- Monthly Bill Summary ---\n");
    printf("Weekday minutes used: %d\n", weekday_minutes);
    printf("Night minutes used: %d\n", night_minutes);
    printf("Weekend minutes used: %d\n", weekend_minutes);
    printf("Pretax bill: $%.2f\n", pretax_bill);
    printf("Average cost per minute before taxes: $%.2f\n", average_cost_per_minute);
    printf("Taxes: $%.2f\n", taxes);
    printf("Total bill: $%.2f\n", total_bill);

    return 0;
}

