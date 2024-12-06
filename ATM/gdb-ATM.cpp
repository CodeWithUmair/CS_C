#include <iostream>
using namespace std;

void deposit(double &balance, double amount);
void withdraw(double &balance, double amount);
void checkBalance(double balance);

int main() {
    double balance = 0.0;
    int choice;
    double amount;

    do {
        cout << "\nATM System:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Funds\n";
        cout << "3. Withdraw Funds\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                deposit(balance, amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                withdraw(balance, amount);
                break;
            case 4:
                cout << "Exiting the ATM system. Thank you!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

// Function definitions

void deposit(double &balance, double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposit successful. Updated balance: $" << balance << endl;
    } else {
        cout << "Invalid deposit amount." << endl;
    }
}

void withdraw(double &balance, double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrawal successful. Remaining balance: $" << balance << endl;
    } else {
        cout << "Insufficient balance or invalid amount." << endl;
    }
}

void checkBalance(double balance) {
    cout << "Current balance: $" << balance << endl;
}
