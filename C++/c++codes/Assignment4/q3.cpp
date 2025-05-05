#include <iostream>
using namespace std;

class FLOAT {
    float value;

public:
    // Constructor
    FLOAT(float v = 0.0) {
        value = v;
    }

    // Input function
    void input() {
        cout << "Enter a float value: ";
        cin >> value;
    }

    
    void display() const {
        cout << "Value: " << value << endl;
    }

 
    FLOAT operator+(const FLOAT& f) const {
        return FLOAT(value + f.value);
    }


    FLOAT operator-(const FLOAT& f) const {
        return FLOAT(value - f.value);
    }

   
    FLOAT operator*(const FLOAT& f) const {
        return FLOAT(value * f.value);
    }

   
    FLOAT operator/(const FLOAT& f) const {
        if (f.value != 0)
            return FLOAT(value / f.value);
        else {
            cout << "Error: Division by zero!" << endl;
            return FLOAT(0);
        }
    }
};

int main() {
    FLOAT f1, f2;

    cout << "Enter first number:\n";
    f1.input();

    cout << "Enter second number:\n";
    f2.input();

    FLOAT sum = f1 + f2;
    FLOAT diff = f1 - f2;
    FLOAT prod = f1 * f2;
    FLOAT quot = f1 / f2;

    cout << "\nResults:\n";
    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();
    cout << "Product: ";
    prod.display();
    cout << "Quotient: ";
    quot.display();

    return 0;
}
