#include <stdio.h>

// Define the date_t structure
typedef struct {
    int day;
    int month;
    int year;
} date_t;

// Define the tank_t structure
typedef struct {
    float capacity;
    float current_level;
} tank_t;

// Define the auto_t structure
typedef struct {
    char make[20];
    char model[20];
    int odometer;
    date_t manufacture_date;
    date_t purchase_date;
    tank_t gas_tank;
} auto_t;

// Function to scan a date
void scan_date(date_t *date) {
    scanf("%d %d %d", &date->day, &date->month, &date->year);
}

// Function to print a date
void print_date(const date_t *date) {
    printf("%d/%d/%d", date->day, date->month, date->year);
}

// Function to scan a tank
void scan_tank(tank_t *tank) {
    scanf("%f %f", &tank->capacity, &tank->current_level);
}

// Function to print a tank
void print_tank(const tank_t *tank) {
    printf("Capacity: %.1f gallons, Current Level: %.1f gallons", tank->capacity, tank->current_level);
}

// Function to scan an automobile
void scan_auto(auto_t *car) {
    scanf("%s %s %d", car->make, car->model, &car->odometer);
    scan_date(&car->manufacture_date);
     scan_date(&car->purchase_date);
    scan_tank(&car->gas_tank);
}

// Function to print an automobile
void print_auto(const auto_t *car) {
    printf("Make: %s, Model: %s, Odometer: %d miles\n", car->make, car->model, car->odometer);
    printf("Manufacture Date: ");
    print_date(&car->manufacture_date);
    printf("\nPurchase Date: ");
    print_date(&car->purchase_date);
    printf("\nGas Tank: ");
    print_tank(&car->gas_tank);
    printf("\n");
}

int main() {
    auto_t car1, car2;

    // Input data for car1
    printf("Enter data for car1 (make model odometer manufacture_date purchase_date tank_capacity tank_current_level): ");
    scan_auto(&car1);

    // Input data for car2
    printf("Enter data for car2 (make model odometer manufacture_date purchase_date tank_capacity tank_current_level): ");
    scan_auto(&car2);

    // Print data for car1
    printf("\nCar 1:\n");
    print_auto(&car1);

    // Print data for car2
    printf("\nCar 2:\n");
    print_auto(&car2);

    return 0;
}
