#include <iostream>
using namespace std;

class Number {
private:
    int value;  // holds the integer

public:
    // Sets the value
    void setNumber(int n) {
        value = n;
    }

    // Returns the current value
    int getNumber() {
        return value;
    }

    // Prints the value
    void printNumber() {
        cout << "Number: " << value << endl;
    }

    // Checks if the number is negative
    bool isNegative() {
        return value < 0;
    }

    // Checks if the number is divisible by n
    bool isDivisibleBy(int n) {
        if (n == 0) {
            cout << "Division by zero not allowed!" << endl;
            return false;
        }
        return value % n == 0;
    }

    // Returns the absolute value
    int absoluteValue() {
        return (value < 0) ? -value : value;
    }
};

// Main function to test the Number class
int main() {
    Number num;
    int input, checkDiv;

    cout << "Enter an integer: ";
    cin >> input;

    num.setNumber(input);
    num.printNumber();

    cout << "Is negative? " << (num.isNegative() ? "Yes" : "No") << endl;

    cout << "Enter a number to check divisibility: ";
    cin >> checkDiv;

    cout << "Is divisible by " << checkDiv << "? " 
         << (num.isDivisibleBy(checkDiv) ? "Yes" : "No") << endl;

    cout << "Absolute value: " << num.absoluteValue() << endl;

    return 0;
}
