#include <stdio.h>
#include <math.h>


void scan_data(char *operator, double *operand) {
    scanf(" %c %lf", operator, operand);
}


void do_next_op(char operator, double operand, double *accumulator) {
    switch (operator) {
        case '+':
            *accumulator += operand;
            break;
        case '-':
            *accumulator -= operand;
            break;
        case '*':
            *accumulator *= operand;
            break;
        case '/':
            if (operand != 0) {
                *accumulator /= operand;
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '^':
            *accumulator = pow(*accumulator, operand);
            break;
        case 'q':
        
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }
}

int main() {
    char operator;
    double operand;
    double accumulator = 0.0;

    printf("Enter operations (e.g., + 5.0) and 'q 0' to quit:\n");

    while (1) {
        scan_data(&operator, &operand);
        if (operator == 'q') {
            break;
        }
        do_next_op(operator, operand, &accumulator);
        printf("Result so far is %.2f\n", accumulator);
    }

    printf("Final result is %.2f\n", accumulator);

    return 0;
}
