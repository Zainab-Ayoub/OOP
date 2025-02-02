#include<iostream>
using namespace std;

class bankAccount{
    private:
        string name_of_the_depositor, type_of_account;
        int account_number;
        float balance_amount_in_the_account;

    public:
        bankAccount(){
            cout<<"Name of the depositor: ";
            cin>>name_of_the_depositor;
            cout<<"Account Number: ";
            cin>>account_number;
            cout<<"Type of Account: ";
            cin>>type_of_account;
            cout<<"Balance Amount in the Account: ";
            cin>>balance_amount_in_the_account;
        }

        void deposit(float d){
            balance_amount_in_the_account += d;
            cout << "Deposited: " << d << endl;
        }

        void withdraw(float w){
            if(w <= balance_amount_in_the_account) {
                balance_amount_in_the_account -= w;
                cout << "Withdrawn: " << w << endl;
            } else {
                cout << "Insufficient balance to withdraw " << w << endl;
            }
        }

        void display(){
            cout << "Name: " << name_of_the_depositor << endl;
            cout << "Account Number: " << account_number << endl;
            cout << "Account Type: " << type_of_account << endl;
            cout << "Balance: " << balance_amount_in_the_account << endl;
        }
};

int main(){
    bankAccount amount;
    
    amount.display();
    amount.deposit(500.75);
    amount.withdraw(200.50);
    amount.display();
    
    return 0;
}
