#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    int balance;
    string ownerName;

public:
    BankAccount(int num, int bal, string name) : accountNumber(num), balance(bal), ownerName(name) {}

    int getAccountNumber() const { return accountNumber; }
    int getBalance() const { return balance; }
    string getOwnerName() const { return ownerName; }

    void credit(int amount) {
        balance += amount;
        cout << "Credited " << amount << " to account." << endl;
    }

    void debit(int amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Debited " << amount << " from account." << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void displayBalance() const {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount BA(1234567891221, 102000, "raemshbhai");

    cout << "A/c no.: " << BA.getAccountNumber() << endl;
    cout << "Ownername: " << BA.getOwnerName() << endl;

    int choice, amount;
    while (true) {
        cout << "\nPress 1 for credit\nPress 2 for Debit\nPress 3 for Display balance\nPress 4 to Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to credit: ";
                cin >> amount;
                BA.credit(amount);
                break;
            case 2:
                cout << "Enter amount to debit: ";
                cin >> amount;
                BA.debit(amount);
                break;
            case 3:
                BA.displayBalance();
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}

