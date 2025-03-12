// We have a base class Bank Account that contains private attributes (balance) and a protected function calculateInterest(). 
// A derived class Savings Account adds an interest rate and overrides function. 
// Another derived class PremiumSavings extends Savings Account and modifies interest calculations. 
// Key Concepts in This Example: Private Member Access: balance is private, but accessible via getBalance() 
// Protected Member Function: calculateinterest() is protected, only accessible in derived classe 
// Function Overriding: withdraw() is overridden in Savings Account 
// Multilevel Inheritance: Premium Savings extends Savings Account

#include<iostream>
using namespace std;

class bankAccount{
    private:
        double balance, interest, x, y;
    protected:
        double interestRate = 0;
        void calculateInterest(){
            interest = balance * interestRate / 100;
        }
        double deposit(){
            cout<<"Enter amount you want to deposit: ";
            cin>>x;
            balance += x;
        }
        double withdraw(){
            cout<<"Enter amount you want to withdraw: ";
            cin>>y;
            balance -= y;
        }
        double getBalance(){
            return balance;
        }
};

class savingsAccount : protected bankAccount{
    protected:
        double rate;
    public:
        void addInterestRate(){
            cout<<"Enter Interest Rate: ";
            cin>>rate;
            interestRate += rate;
            bankAccount :: calculateInterest();
        }
};

class premiumSavings : public savingsAccount{
    public:
        void modifyingInterestRate(){
            savingsAccount :: addInterestRate();
            rate -= 10;
        }
};
int main(){
    premiumSavings obj;
    obj.modifyingInterestRate();
}