#include <iostream>
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
        cout << "Name: " << name << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount account;

    account.initialize("Pushkar", 12345, "Savings", 5000);
    account.display();

    account.deposit(2000);
    account.withdraw(1500);
    account.display();

    return 0;
}