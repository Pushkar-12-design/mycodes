#include <stdio.h>
#include <stdbool.h>

// Function to dispense money
void dispense_money(int amount) {
    printf("Dispensed bills:\n50s: %d\n20s: %d\n10s: %d\n", amount / 50, (amount % 50) / 20, (amount % 20) / 10);
}

// Function to check if a number is a multiple of 7, 11, or 13
void check_multiples(int num, int *multiple7, int *multiple11, int *multiple13) {
    *multiple7 = (num % 7 == 0);
    *multiple11 = (num % 11 == 0);
    *multiple13 = (num % 13 == 0);
}

// Function to check if the sum of the digits is odd or even
void check_sum_of_digits(int num, int *sum_even) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    *sum_even = (sum % 2 == 0);
}

// Function to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
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

    int n;
    printf("Enter the number of positive integers: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter the positive integers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++) {
        int num = numbers[i], multiple7, multiple11, multiple13, sum_even;
        check_multiples(num, &multiple7, &multiple11, &multiple13);
        check_sum_of_digits(num, &sum_even);
        bool prime = is_prime(num);

        printf("Number: %d\nMultiple of 7: %s\nMultiple of 11: %s\nMultiple of 13: %s\nSum of digits is %s\nPrime number: %s\n\n",
               num, multiple7 ? "Yes" : "No", multiple11 ? "Yes" : "No", multiple13 ? "Yes" : "No", sum_even ? "Even" : "Odd", prime ? "Yes" : "No");
    }

    return 0;
}
