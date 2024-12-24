#include <stdio.h>
#include <math.h>

int within_x_percent(double ref, double data, double x) {
    double lower_bound = ref - (x / 100.0) * ref;
    double upper_bound = ref + (x / 100.0) * ref;
    return (data >= lower_bound && data <= upper_bound);
}

int main() {
    double boiling_points[] = {100.0, 357.0, 1187.0, 2193.0, 2660.0};
    const char *substances[] = {"Water", "Mercury", "Copper", "Silver", "Gold"};
    int num_substances = sizeof(boiling_points) / sizeof(boiling_points[0]);
    double observed_boiling_point;
    int found = 0;

    printf("Enter the observed boiling point (°C): ");
    scanf("%lf", &observed_boiling_point);

    for (int i = 0; i < num_substances; i++) {
        if (within_x_percent(boiling_points[i], observed_boiling_point, 5.0)) {
            printf("The substance is %s\n", substances[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Substance Unknown\n");
    }

    return 0;
}
