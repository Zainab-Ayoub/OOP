#include <iostream>
#include <string>
using namespace std;

class Payment {
    private:
        float amount;
        string method;
    public:
        void payment(double amount, string method) {
            cout << "Processing a payment of Rs." << amount << " using " << method << "." << endl;
        }

        void receipt(double amount, string method) {
            cout << "\tReceipt" << endl;
            cout << "Payment Method: " << method << endl;
            cout << "Amount Paid: Rs." << amount << endl;
        }
};

int main() {
    int c;
    float amount;
    Payment payment;
    cout<<"Amount: Rs. ";
    cin>>amount;
    cout<<"Select a payment method: \n";
    cout<<"Press 1 for Credit Card Payment"<<endl;
    cout<<"Press 2 for Cash Payment"<<endl;
    cout<<"Press 3 to Exit the Program"<<endl;
    cin>>c;
    switch(c){
        case 1:
            payment.payment(amount, "Credit Card");
            payment.receipt(amount, "Credit Card");
            break;
        case 2:
            payment.payment(amount, "Cash");
            payment.receipt(amount, "Credit Card");
            break;
        case 3:
            cout<<"Program Exited!";
    }
}
