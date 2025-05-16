#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int code;
public:
    void setPerson(string n, int c) {
        name = n;
        code = c;
    }
    void showPerson() const {
        cout << "Name: " << name << "\nCode: " << code << endl;
    }
};

// Derived class 1 (virtual)
class Account : virtual public Person {
protected:
    float pay;
public:
    void setPay(float p) {
        pay = p;
    }
    void showPay() const {
        cout << "Pay: Rs. " << pay << endl;
    }
};

// Derived class 2 (virtual)
class Admin : virtual public Person {
protected:
    int experience;
public:
    void setExperience(int e) {
        experience = e;
    }
    void showExperience() const {
        cout << "Experience: " << experience << " years" << endl;
    }
};

// Final derived class
class Master : public Account, public Admin {
public:
    void create(string n, int c, int exp, float p) {
        setPerson(n, c);
        setExperience(exp);
        setPay(p);
    }

    void update(string n, int c, int exp, float p) {
        setPerson(n, c);
        setExperience(exp);
        setPay(p);
        cout << "Record updated.\n";
    }

    void display() const {
        cout << "\n--- Master Object Data ---\n";
        showPerson();
        showExperience();
        showPay();
        cout << "--------------------------\n";
    }
};

// Main function
int main() {
    Master m;

    // Create master object
    m.create("Ravi Kumar", 101, 5, 55000.0f);
    m.display();

    // Update master object
    m.update("Ravi Kumar", 101, 6, 60000.0f);
    m.display();

    return 0;
}
