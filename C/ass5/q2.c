#include <stdio.h>
#include <math.h>

int main() {
    int x[20], y[20], z[20];
    int n = 0, value;
    double sum = 0.0;

    // Input values for array x
    printf("Enter values for array x (end with -1): ");
    while (n < 20 && scanf("%d", &value) && value != -1) {
        x[n++] = value;
    }

    // Input values for array y
    printf("Enter values for array y (end with -1): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &y[i]);
    }

    // Calculate the product of corresponding elements and store in array z
    for (int i = 0; i < n; i++) {
        z[i] = x[i] * y[i];
        sum += z[i];
    }

    // Display the arrays in a three-column table
    printf("\n%-10s %-10s %-10s\n", "Array x", "Array y", "Array z");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-10d %-10d\n", x[i], y[i], z[i]);
    }

    // Compute and display the square root of the sum of the items in z
    printf("\nSquare root of the sum of the items in array z: %.2f\n", sqrt(sum));

    return 0;
}
