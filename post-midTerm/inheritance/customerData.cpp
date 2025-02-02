#include<iostream>
using namespace std;

class customerData{
    protected:
        int customerNumber;
        string mailingAddress;
    public:
        void inputCustomerData(){
            cout<<"Enter Customer Number: ";
            cin>>customerNumber;
            cout<<"Enter Mailing Address: ";
            cin>>mailingAddress;
        }
        void displayCustomerData(){
            cout<<"Customer Number: "<<customerNumber<<endl;
            cout<<"Mailing Address: "<<mailingAddress<<endl;
        }

};

class preferredCustomer : public customerData{
    private:
        double purchaseAmount, discountLevel;
    public:  
        void inputCustomerData(){
            customerData :: inputCustomerData();
            cout<<"Enter Purchase Amount: $";
            cin>>purchaseAmount;
            if(purchaseAmount >= 2000){
                discountLevel=10.0;
            } else if(purchaseAmount >= 1500){
                discountLevel=7.0; 
            } else if(purchaseAmount >= 1000){
                discountLevel=6.0; 
            } else if(purchaseAmount >= 500){
                discountLevel=5.0; 
            } else{
                discountLevel=0.0;
            }
        }  
        void displayCustomerData(){
            customerData :: displayCustomerData();
            cout<<"Purchase Amount: $"<<purchaseAmount<<endl;
            cout<<"Discount Level: "<<discountLevel<<"%"<<endl;
        }
};

int main(){
    preferredCustomer obj;
    cout<<"Press 1 to input data: "
    obj.inputCustomerData();
    obj.displayCustomerData();
}