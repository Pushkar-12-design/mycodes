#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_ITEMS = 50;

class ShoppingList {
private:
    int itemCode[MAX_ITEMS];
    float itemPrice[MAX_ITEMS];
    int count;

public:
    ShoppingList() {
        count = 0;
    }

    void addItem(int code, float price) {
        if (count < MAX_ITEMS) {
            itemCode[count] = code;
            itemPrice[count] = price;
            count++;
            cout << "Item added successfully.\n";
        } else {
            cout << "List is full!\n";
        }
    }

    void deleteItem(int code) {
        bool found = false;
        for (int i = 0; i < count; ++i) {
            if (itemCode[i] == code) {
                for (int j = i; j < count - 1; ++j) {
                    itemCode[j] = itemCode[j + 1];
                    itemPrice[j] = itemPrice[j + 1];
                }
                count--;
                found = true;
                cout << "Item deleted successfully.\n";
                break;
            }
        }
        if (!found)
            cout << "Item code not found!\n";
    }

    void totalValue() const {
        float total = 0;
        for (int i = 0; i < count; ++i)
            total += itemPrice[i];
        cout << "Total order value: Rs. " << total << "\n";
    }

    void displayItems() const {
        cout << "\n--- Shopping List ---\n";
        cout << left << setw(10) << "Code" << setw(10) << "Price" << "\n";
        for (int i = 0; i < count; ++i)
            cout << left << setw(10) << itemCode[i] << setw(10) << itemPrice[i] << "\n";
        cout << "----------------------\n";
    }
};

// Main Function
int main() {
    ShoppingList list;
    int choice, code;
    float price;

    do {
        cout << "\nMENU:\n";
        cout << "1. Add Item\n2. Delete Item\n3. Total Order Value\n4. Display Items\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter item code: ";
                cin >> code;
                cout << "Enter item price: ";
                cin >> price;
                list.addItem(code, price);
                break;
            case 2:
                cout << "Enter item code to delete: ";
                cin >> code;
                list.deleteItem(code);
                break;
            case 3:
                list.totalValue();
                break;
            case 4:
                list.displayItems();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
