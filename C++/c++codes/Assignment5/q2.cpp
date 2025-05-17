#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    double x, y;

public:
    void get_data() {
        cout << "Enter two values (e.g., base & height or sides): ";
        cin >> x >> y;
    }

    virtual void display_area() = 0;  // Pure virtual function
};

// Derived class: Triangle
class Triangle : public Shape {
public:
    void display_area() override {
        cout << "Area of Triangle: " << 0.5 * x * y << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void display_area() override {
        cout << "Area of Rectangle: " << x * y << endl;
    }
};

// Main function
int main() {
    Shape* shapePtr;
    Triangle tri;
    Rectangle rect;
    int choice;

    cout << "Choose a shape to calculate area:\n";
    cout << "1. Triangle\n2. Rectangle\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            shapePtr = &tri;
            break;
        case 2:
            shapePtr = &rect;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    shapePtr->get_data();
    shapePtr->display_area();

    return 0;
}
