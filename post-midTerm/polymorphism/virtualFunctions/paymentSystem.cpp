#include<iostream>
using namespace std;

class paymentMethod{
    public:
        virtual void processPayment(double amount){
            cout<<"Processing payment of $"<<amount<<"using generic method.\n";
        }
};

class creditCard : public paymentMethod{
    public:
        void processPayment(double amount){
            cout<<"Processing payment of $"<<amount<<" using credit card.\n";
        }
};

class paypal : public paymentMethod{
    public:
        void processPayment(double amount){
            cout<<"Processing payment of $"<<amount<<" using paypal.\n";
        }
};

class bankTransfer : public paymentMethod{
    public:
        void processPayment(double amount){
            cout<<"Processing payment of $"<<amount<<" using bank transfer.\n";
        }
};

int main(){
    paymentMethod *ptr[3];
    ptr[0] = new creditCard;
    ptr[1] = new paypal;
    ptr[2] = new bankTransfer;

    ptr[0]->processPayment(123.45);
    ptr[1]->processPayment(345.67);
    ptr[2]->processPayment(234.56);
}    