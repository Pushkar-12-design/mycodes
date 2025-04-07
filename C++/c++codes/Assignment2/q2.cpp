#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    string name;
    int accountNumber;
    string accountType;
    double balance;

    void initialize(string n, int accNo, string type, double bal) {
        name = n;
        accountNumber = accNo;
        accountType = type;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << "\nNew Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\nNew Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() {
        cout << "Name: " << name << ", Balance: " << balance << endl;
    }
};

int main() {
    const int MAX_CUSTOMERS = 10;
    BankAccount customers[MAX_CUSTOMERS];

    // Initialize accounts for 10 customers
    for (int i = 0; i < MAX_CUSTOMERS; i++) {
        string name;
        int accNo;
        string type;
        double initialBalance;

        cout << "Enter details for customer " << (i + 1) << ":\n";
        cout << "Name: ";
        cin >> name;
        cout << "Account Number: ";
        cin >> accNo;
        cout << "Account Type (Savings/Current): ";
        cin >> type;
        cout << "Initial Balance: ";
        cin >> initialBalance;

        customers[i].initialize(name, accNo, type, initialBalance);
    }

    // Perform operations on the accounts
    for (int i = 0; i < MAX_CUSTOMERS; i++) {
        cout << "\nCustomer " << (i + 1) << " details:\n";
        customers[i].display();

        double depositAmount, withdrawAmount;

        cout << "Enter amount to deposit: ";
        cin >> depositAmount;
        customers[i].deposit(depositAmount);

        cout << "Enter amount to withdraw: ";
        cin >> withdrawAmount;
        customers[i].withdraw(withdrawAmount);

        customers[i].display();
    }

    return 0;
}