//2.Define a class to represent a bank account

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    string accountType;
    double balance;

public:
    BankAccount(string n, int num, string type, double bal) {
        name = n;
        accountNumber = num;
        accountType = type;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance." << "\n";
        } else {
            balance -= amount;
        }
    }

    void display() {
        cout << "Name: " << name << "\n";
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Account Type: " << accountType << "\n";
        cout << "Balance: $" << balance << "\n";
    }
};

int main() {
    BankAccount account("John", 123456789, "Savings", 1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    account.display();
    return 0;
}

