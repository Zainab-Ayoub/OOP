// Create a Wallet class with a private attribute for the balance. 
// Write methods to add money and check the current balance, 
// ensuring balance cannot be set directly.

#include<iostream>
using namespace std;

class Wallet {
    private:
        float balance;  

    public:
        Wallet() {
            balance = 0.0;
        }

        void addMoney(float amount) {
            if(amount > 0){
                balance += amount;
                cout<<"Added "<<amount<<" to your wallet."<<endl;
            } else{
                cout<<"Invalid amount! Please enter a positive value."<<endl;
            }
        }

        void checkBalance(){
            cout<<"Current balance: "<<balance<<endl;
        }
};

int main(){
    Wallet wallet;
    int choice;
    float amount;

    while(true){
        cout<<"Press 1 add money to the wallet\n";
        cout<<"Press 2 check balance\n";
        cout<<"Press 3 Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter the amount to add: ";
                cin>>amount;
                wallet.addMoney(amount);  
                break;

            case 2:
                wallet.checkBalance();  
                break;

            case 3:
                cout<<"Program Exited!"<<endl;
                return 0;

            default:
                cout<<"Invalid choice! Please try again."<<endl;
        }
    }
}
