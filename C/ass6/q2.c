#include <stdio.h>

// Define the element_t structure
typedef struct {
    int atomic_number;
    char name[20];
    char symbol[5];
    char class[20];
    float atomic_weight;
    int electrons[7];
} element_t;

// Function to scan an element
void scan_element(element_t *element) {
    printf("Enter atomic number: ");
    scanf("%d", &element->atomic_number);
    printf("Enter name: ");
    scanf("%s", element->name);
    printf("Enter symbol: ");
    scanf("%s", element->symbol);
    printf("Enter class: ");
    scanf("%s", element->class);
    printf("Enter atomic weight: ");
    scanf("%f", &element->atomic_weight);
    printf("Enter electrons in each shell (7 values): ");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &element->electrons[i]);
    }
}

// Function to print an element
void print_element(const element_t *element) {
    printf("Atomic Number: %d\n", element->atomic_number);
    printf("Name: %s\n", element->name);
    printf("Symbol: %s\n", element->symbol);
    printf("Class: %s\n", element->class);
    printf("Atomic Weight: %.4f\n", element->atomic_weight);
    printf("Electrons in each shell: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", element->electrons[i]);
    }
    printf("\n");
}

int main() {
    element_t sodium;

    // Input data for sodium
    printf("Enter data for an element:\n");
    scan_element(&sodium);

    // Print data for sodium
    printf("\nElement Data:\n");
    print_element(&sodium);

    return 0;
}
