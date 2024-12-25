#include <stdio.h>

// Recursive function definition
int f(int x) {
    if (x <= 0) {
        return 0;
    } else {
        return f(x - 1) + 2;
    }
}

int main() {
    int x;

    // Input value from user
    printf("Enter a value for x: ");
    scanf("%d", &x);

    // Call the recursive function and display the result
    int result = f(x);
    printf("f(%d) = %d\n", x, result);

    return 0;
}
