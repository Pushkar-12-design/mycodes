#include <stdio.h>

int within_x_percent(double ref, double data, double x) {
    double lower_bound = ref - (x / 100.0) * ref;
    double upper_bound = ref + (x / 100.0) * ref;
    return (data >= lower_bound && data <= upper_bound);
}

int main() {
    double observed_boiling_point;
    printf("Enter the observed boiling point (C): ");
    scanf("%lf", &observed_boiling_point);

    if (within_x_percent(100, observed_boiling_point, 5)) {
        printf("Substance: Water\n");
    } else if (within_x_percent(357, observed_boiling_point, 5)) {
        printf("Substance: Mercury\n");
    } else if (within_x_percent(1187, observed_boiling_point, 5)) {
        printf("Substance: Copper\n");
    } else if (within_x_percent(2193, observed_boiling_point, 5)) {
        printf("Substance: Silver\n");
    } else if (within_x_percent(2660, observed_boiling_point, 5)) {
        printf("Substance: Gold\n");
    } else {
        printf("Substance Unknown\n");
    }

    return 0;
}
