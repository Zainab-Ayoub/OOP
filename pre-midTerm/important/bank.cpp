#include <iostream>
#include <string>
using namespace std;

class bankAccount {
private:
    string name_of_the_depositor, type_of_account;
    int account_number;
    float balance_amount_in_the_account;

public:
    bankAccount() {
        cout << "Name of the depositor: ";
        cin >> name_of_the_depositor;
        cout << "Account Number: ";
        cin >> account_number;
        cout << "Type of Account: ";
        cin >> type_of_account;
        cout << "Balance Amount in the Account: ";
        cin >> balance_amount_in_the_account;
    }

    void deposit(float d) {
        balance_amount_in_the_account += d;
        cout << "Deposited: " << d << endl;
    }

    void withdraw(float w) {
        if (w <= balance_amount_in_the_account) {
            balance_amount_in_the_account -= w;
            cout << "Withdrawn: " << w << endl;
        } else {
            cout << "Insufficient balance to withdraw " << w << endl;
        }
    }

    void display() const {
        cout << "Name: " << name_of_the_depositor << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Account Type: " << type_of_account << endl;
        cout << "Balance: " << balance_amount_in_the_account << endl;
    }

    float operator+(bankAccount &other) {
        return balance_amount_in_the_account + other.balance_amount_in_the_account;
    }
};

int main() {
    cout << "Enter details for first account:" << endl;
    bankAccount account1;

    cout << "\nEnter details for second account:" << endl;
    bankAccount account2;
    cout << "\nDetails of first account:" << endl;
    account1.display();
    cout << "\nDetails of second account:" << endl;
    account2.display();

    account1.deposit(1000);
    account2.withdraw(500);

    float total_balance = account1 + account2;

    cout << "\nTotal balance of both accounts: " << total_balance << endl;

    return 0;
}
