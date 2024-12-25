#include <stdio.h>
#include <math.h>

// Function to calculate the square root using the iterative method
double calculate_square_root(double N) {
    double LG = 1.0; // Initial guess
    double NG; // Next guess

    do {
        NG = 0.5 * (LG + N / LG);
        if (fabs(NG - LG) < 0.005) {
            break;
        }
        LG = NG;
    } while (1);

    return NG;
}

int main() {
    double N;
    printf("Enter the number to find the square root of: ");
    scanf("%lf", &N);

    double result = calculate_square_root(N);
    printf("The approximate square root of %.2f is %.5f\n", N, result);

    return 0;
}
