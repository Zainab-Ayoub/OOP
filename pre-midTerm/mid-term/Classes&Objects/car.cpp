// How would you design a Car class that tracks 
// its speed and fuel level and includes methods 
// to accelerate and refuel?

#include<iostream>
using namespace std;

class Car{
    private:
        float speed, fuelLevel, fuelCapacity;
    public:
        Car(float capacity){
            speed = 0; 
            fuelLevel = 0; 
            fuelCapacity = capacity;
        }    
        void accelerate(int a){
            if(fuelLevel <= 0){
                cout<<"Insufficient fuel! Refuel your car to accelerate."<<endl;
                return;
            }
            if(a <= 0){
                cout<<"Refill to accelerate"<<endl;
                return;
            }
            speed += a;
            a *= 0.1;
            fuelLevel -= a;

            cout<<"Current Speed: "<<speed<<endl;
            cout<<"Remaining Fuel: "<<fuelLevel<<endl;
        }
        void refuel(int r){
            if(r <= 0){
                cout<<"Invalid Entry!"<<endl;
                return;
            }

            fuelLevel += r;

            if(fuelLevel>fuelCapacity){
                fuelLevel = fuelCapacity; 
            }

            cout<<"Current Fuel Level: "<<fuelLevel<<endl;
        }
        void display(){
            cout<<"Current Speed: "<<speed<<endl;
            cout<<"Current Fuel Level: "<<fuelLevel<<endl;
            cout<<"Fuel Capacity: "<<fuelCapacity<<endl;
        }
};  

int main(){
    int c;
    float a, r, fuel;
    cout<<"Enter fuel capacity: ";
    cin>>fuel;
    Car obj(fuel);
    while(true){
        cout<<"Press 1 to accelerate your car.\n"
        <<"Press 2 to refuel your car.\n"
        <<"Press 3 to display status.\n"
        <<"Press 4 to exit.\n";
        cin>>c;    
        switch(c){
            case 1:
                cout<<"Enter acceleration (km/h): ";
                cin>>a;
                obj.accelerate(a);    
                break;   
            case 2:
                cout<<"Enter amount of fuel to add (liters): ";
                cin>>r;
                obj.refuel(r);  
                break;     
            case 3:
                obj.display();  
                break;     
            case 4:
                cout<<"Program Exited!"<<endl;
                break;
            default:
                cout<<"Invalid choice! Please try again."<<endl;       
        }
    }
}