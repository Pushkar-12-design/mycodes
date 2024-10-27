#include <stdio.h>

#define NUM_BRANDS 4

void get_initial_inventory(int inventory[]) {
    printf("Enter initial inventory for Piels, Coors, Bud, and Iron City:\n");
    for (int i = 0; i < NUM_BRANDS; i++) {
        scanf("%d", &inventory[i]);
    }
}

void process_transactions(int inventory[]) {
    int brand_id, amount;

    printf("Enter transactions (brand ID followed by amount, or -1 to end):\n");
    while (1) {
        scanf("%d", &brand_id);
        if (brand_id == -1) break;
        scanf("%d", &amount);
        
        if (brand_id >= 1 && brand_id <= NUM_BRANDS) {
            inventory[brand_id - 1] += amount;
        } else {
            printf("Invalid brand ID: %d\n", brand_id);
        }
    }
}

void display_final_inventory(int inventory[]) {
    const char *brand_names[] = {"Piels", "Coors", "Bud", "Iron City"};
    
    printf("Final inventory:\n");
    for (int i = 0; i < NUM_BRANDS; i++) {
        printf("%s: %d cases\n", brand_names[i], inventory[i]);
    }
}

int main() {
    int inventory[NUM_BRANDS];

    // Get initial inventory
    get_initial_inventory(inventory);

    // Process transactions
    process_transactions(inventory);

    // Display final inventory
    display_final_inventory(inventory);

    return 0;
}
