#include <stdio.h>

// Function to get the coordinates of the two points
void get_coordinates(double *x1, double *y1, double *x2, double *y2) {
    printf("Enter the x-coordinate of the first point: ");
    scanf("%lf", x1);
    printf("Enter the y-coordinate of the first point: ");
    scanf("%lf", y1);
    printf("Enter the x-coordinate of the second point: ");
    scanf("%lf", x2);
    printf("Enter the y-coordinate of the second point: ");
    scanf("%lf", y2);
}

// Function to compute the slope of the line segment
double compute_slope(double x1, double y1, double x2, double y2) {
    if (x1 == x2) {
        return 0; // Vertical line
    }
    return (y2 - y1) / (x2 - x1);
}

// Function to compute the midpoint of the line segment
void compute_midpoint(double x1, double y1, double x2, double y2, double *x_mid, double *y_mid) {
    *x_mid = (x1 + x2) / 2;
    *y_mid = (y1 + y2) / 2;
}

// Function to compute the slope of the perpendicular bisector
double compute_perpendicular_slope(double slope) {
    if (slope == 0) {
        return 0; // Perpendicular to a horizontal line is a vertical line
    }
    return -1 / slope;
}

// Function to compute the y-intercept of the perpendicular bisector
double compute_y_intercept(double slope, double x_mid, double y_mid) {
    return y_mid - slope * x_mid;
}

int main() {
    double x1, y1, x2, y2;
    double slope, x_mid, y_mid, perp_slope, y_intercept;

    // Get the coordinates of the two points
    get_coordinates(&x1, &y1, &x2, &y2);

    // Compute the slope of the line segment
    slope = compute_slope(x1, y1, x2, y2);

    // Compute the midpoint of the line segment
    compute_midpoint(x1, y1, x2, y2, &x_mid, &y_mid);

    // Compute the slope of the perpendicular bisector
    perp_slope = compute_perpendicular_slope(slope);

    // Compute the y-intercept of the perpendicular bisector
    y_intercept = compute_y_intercept(perp_slope, x_mid, y_mid);

    // Output the results
    printf("Original points: (%.2lf, %.2lf) and (%.2lf, %.2lf)\n", x1, y1, x2, y2);
    printf("Midpoint: (%.2lf, %.2lf)\n", x_mid, y_mid);
    if (slope == 0) {
        printf("The equation of the perpendicular bisector is x = %.2lf\n", x_mid);
    } else {
        printf("The equation of the perpendicular bisector is y = %.2lfx + %.2lf\n", perp_slope, y_intercept);
    }

    return 0;
}
