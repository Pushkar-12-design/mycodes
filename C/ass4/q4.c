#include <stdio.h>

// Function to compute the drag force
double compute_drag_force(double CD, double A, double rho, double V) {
    return 0.5 * CD * A * rho * V * V;
}

int main() {
    double A, CD;
    const double rho = 1.23; // Density of air at sea level in kg/m^3

    // Input projected area and drag coefficient
    printf("Enter the projected area (in m^2): ");
    scanf("%lf", &A);
    printf("Enter the drag coefficient: ");
    scanf("%lf", &CD);

    // Display table header
    printf("\nVelocity (m/s)\tDrag Force (N)\n");
    printf("-----------------------------\n");

    // Compute and display drag force for velocities from 0 m/s to 40 m/s in increments of 5 m/s
    for (int V = 0; V <= 40; V += 5) {
        double F = compute_drag_force(CD, A, rho, V);
        printf("%d\t\t%.2f\n", V, F);
    }

    return 0;
}
