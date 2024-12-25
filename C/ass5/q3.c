#include <stdio.h>
#include <string.h>

// Function to remove blanks from a string
void deblank(char *output, const char *input) {
    while (*input != '\0') {
        if (*input != ' ') {
            *output = *input;
            output++;
        }
        input++;
    }
    *output = '\0'; // Null-terminate the output string
}

int main() {
    char input[100], output[100];

    // Input string from user
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from fgets input
    input[strcspn(input, "\n")] = '\0';

    // Call deblank function
    deblank(output, input);

    // Display the result
    printf("String with blanks removed: %s\n", output);

    return 0;
}
