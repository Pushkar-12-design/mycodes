#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Base class
class Account {
protected:
    string customerName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor
    Account(string name, int accNum, string accType, double initialBalance)
        : customerName(name), accountNumber(accNum), accountType(accType), balance(initialBalance) {}

    // Deposit
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    // Display balance
    void displayBalance() const {
        cout << "Account Holder: " << customerName << "\n";
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Account Type: " << accountType << "\n";
        cout << "Current Balance: Rs. " << balance << "\n";
    }

    // Withdraw (common logic)
    virtual void withdraw(double amount) = 0;

    virtual ~Account() {} // Virtual destructor
};

// Derived class for Savings Account
class SavingsAccount : public Account {
    double interestRate; // annual interest rate in %

public:
    SavingsAccount(string name, int accNum, double initialBalance, double rate = 4.0)
        : Account(name, accNum, "Savings", initialBalance), interestRate(rate) {}

    // Compute and deposit interest
    void computeInterest(int years) {
        double interest = balance * pow((1 + interestRate / 100), years) - balance;
        balance += interest;
        cout << "Interest of Rs. " << interest << " added for " << years << " year(s).\n";
    }

    // Withdraw
    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: Rs. " << amount << "\n";
        } else {
            cout << "Insufficient balance!\n";
        }
    }
};

// Derived class for Current Account
class CurrentAccount : public Account {
    const double minBalance = 1000.0;
    const double serviceCharge = 100.0;

public:
    CurrentAccount(string name, int accNum, double initialBalance)
        : Account(name, accNum, "Current", initialBalance) {}

    // Withdraw
    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: Rs. " << amount << "\n";
            checkMinimumBalance();
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    // Check minimum balance and impose penalty if needed
    void checkMinimumBalance() {
        if (balance < minBalance) {
            balance -= serviceCharge;
            cout << "Balance below minimum! Service charge of Rs. " << serviceCharge << " imposed.\n";
        }
    }
};

// --------- Main Function for Testing ---------
int main() {
    // Create Savings Account
    SavingsAccount sav("Alice", 101, 5000);
    sav.displayBalance();
    sav.deposit(1000);
    sav.computeInterest(2);
    sav.withdraw(3000);
    sav.displayBalance();

    cout << "--------------------------\n";

    // Create Current Account
    CurrentAccount cur("Bob", 102, 1500);
    cur.displayBalance();
    cur.deposit(500);
    cur.withdraw(1200); // Should go below min balance
    cur.displayBalance();

    return 0;
}
