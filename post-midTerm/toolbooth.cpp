#include<iostream>
using namespace std;

class toolbooth{
    private:
        int numOfCars;
        double amount;
    public:
        toolbooth(){
            numOfCars = 0;
            amount = 0.0;
        }
        void payingCar(){
            numOfCars++;
            amount += 0.50;
        }
        void nonPayingCar(){
            numOfCars++;
        }
        void displayTotal(){
            cout<<"Total Cars: "<<numOfCars<<endl;
            cout<<"Total Cash: "<<amount<<" rupees"<<endl;
        }
};

int main(){
    toolbooth obj;
    int x;

    while(true){
        cout<<"Enter 1 for paying car.\nEnter 2 for non paying car.\nEnter 3 to display total.\nEnter 0 to exit the program.\n";
        cin>>x;
        switch(x){
            case 1:
                obj.payingCar();
                break;
            case 2:
                obj.nonPayingCar();
                break;
            case 3:
                obj.displayTotal();
                break;
            case 0:
                cout<<"Program Terminated!\n";
                return 0;
            default:
                cout<<"Invalid Entry.\n"; 
                break;      
        }
    }
}