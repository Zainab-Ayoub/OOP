#include<iostream>
using namespace std;

class customerData{
    protected:
        int customerNumber;
        string mailingAddress;
    public:

};

class preferredCustomer : public customerData{
    private:
        double purchaseAmount, discountLevel;
    public:    
};

int main(){
    
}