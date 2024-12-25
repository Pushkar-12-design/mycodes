#include <stdio.h>

void dispense_money(int amount) {
    int fifties = 0, twenties = 0, tens = 0;

    // Calculate the number of 50s
    fifties = amount / 50;
    amount %= 50;

    // Calculate the number of 20s
    twenties = amount / 20;
    amount %= 20;

    // Calculate the number of 10s
    tens = amount / 10;

    // Output the result
    printf("Dispensed bills:\n");
    printf("50s: %d\n", fifties);
    printf("20s: %d\n", twenties);
    printf("10s: %d\n", tens);
}

int main() {
    int amount;

    printf("Enter the amount desired (a multiple of 10 dollars): ");
    scanf("%d", &amount);

    if (amount % 10 != 0) {
        printf("Error: The amount must be a multiple of 10 dollars.\n");
    } else {
        dispense_money(amount);
    }

    return 0;
}