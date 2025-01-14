// Write a Vehicle class to model a vehicle's motion. 
// Include abstract methods for starting and stopping the vehicle.

#include <iostream>
using namespace std;

class Vehicle {
public:
    void start(string vehicleType){
        cout<<vehicleType<<" has started moving."<<endl;
    }
    void stop(string vehicle){
        cout<<vehicle<<" has stopped."<<endl;
    }
};

int main() {
    Vehicle vehicle;

    cout << "Car Motion:" << endl;
    vehicle.start("Car");
    vehicle.stop("Car");

    cout << "Bike Motion:" << endl;
    vehicle.start("Bike");
    vehicle.stop("Bike");

    return 0;
}
