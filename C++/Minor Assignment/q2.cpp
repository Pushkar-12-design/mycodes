#include <iostream>
using namespace std;

class Vector {
private:
    float arr[100];  // Array to store float values
    int size;

public:
    // Create vector with user input
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

    // Add two vectors
    void addVector(Vector v1, Vector v2) {
        if (v1.size != v2.size) {
            cout << "Error: Vectors must be of the same size to add.\n";
            size = 0;
            return;
        }
        size = v1.size;
        for (int i = 0; i < size; ++i) {
            arr[i] = v1.arr[i] + v2.arr[i];
        }
        cout << "Vectors added successfully.\n";
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

// Main function to test vector addition
int main() {
    Vector v1, v2, result;
    int n;

    cout << "Enter size of the vectors: ";
    cin >> n;

    cout << "\nEnter elements for Vector 1:\n";
    v1.create(n);

    cout << "\nEnter elements for Vector 2:\n";
    v2.create(n);

    result.addVector(v1, v2);

    cout << "\nResultant Vector after Addition:\n";
    result.display();

    return 0;
}
