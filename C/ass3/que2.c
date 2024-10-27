#include <stdio.h>

typedef struct {
    int id;
    double hourly_wage;
    double hours_worked;
} Employee;

double calc_net_pay(double wage, double hours) {
    double gross = (hours > 40) ? (40 * wage + (hours - 40) * wage * 1.5) : (hours * wage);
    return gross * 0.96375; // Applying tax deduction
}

int main() {
    int num_employees;
    double total_payroll = 0.0;

    printf("Enter number of employees: ");
    scanf("%d", &num_employees);

    Employee employees[num_employees];

    for (int i = 0; i < num_employees; i++) {
        printf("Enter details for employee %d (ID, Hourly Wage, Hours Worked): ", i + 1);
        scanf("%d %lf %lf", &employees[i].id, &employees[i].hourly_wage, &employees[i].hours_worked);

        double net_pay = calc_net_pay(employees[i].hourly_wage, employees[i].hours_worked);
        total_payroll += net_pay;

        printf("Employee ID: %d, Net Pay: %.2f\n", employees[i].id, net_pay);
    }

    printf("Total Payroll: %.2f\n", total_payroll);
    printf("Average Pay: %.2f\n", total_payroll / num_employees);

    return 0;
}
