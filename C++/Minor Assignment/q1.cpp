#include <iostream>
using namespace std;

class Vector {
private:
    float arr[100];  // Array to store float values
    int size;

public:
    // Constructor to create vector
    void create(int n) {
        size = n;
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; ++i) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    // Modify a value at a given index
    void modify(int index, float newValue) {
        if (index >= 0 && index < size) {
            arr[index] = newValue;
            cout << "Element updated.\n";
        } else {
            cout << "Invalid index!\n";
        }
    }

    // Multiply all elements by a scalar
    void multiply(float scalar) {
        for (int i = 0; i < size; ++i)
            arr[i] *= scalar;
        cout << "Vector scaled by " << scalar << ".\n";
    }

    // Display the vector
    void display() const {
        cout << "Vector: (";
        for (int i = 0; i < size; ++i) {
            cout << arr[i];
            if (i < size - 1)
                cout << ", ";
        }
        cout << ")\n";
    }
};

// Main function to test the class
int main() {
    Vector v;
    int choice, index, n;
    float value, scalar;

    cout << "Enter size of vector: ";
    cin >> n;
    v.create(n);

    do {
        cout << "\nMENU:\n1. Modify Element\n2. Multiply by Scalar\n3. Display Vector\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter index (0 to " << n - 1 << "): ";
                cin >> index;
                cout << "Enter new value: ";
                cin >> value;
                v.modify(index, value);
                break;
            case 2:
                cout << "Enter scalar to multiply: ";
                cin >> scalar;
                v.multiply(scalar);
                break;
            case 3:
                v.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
