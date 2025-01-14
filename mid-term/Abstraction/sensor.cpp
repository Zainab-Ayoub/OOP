#include <iostream>
#include <string>
using namespace std;

class Sensor{
private:
    float data;  
    float processData() const{
        return data * 2;
    }

public:
    void store(float d){
        data = d;  
    }
    float getData() const{
        return data;    
    }
    float getProcessedData() const{
        return processData(); 
    }
};

int main(){
    Sensor sensor;
    sensor.store(15);
    cout<<"Original Data: "<<sensor.getData()<<endl;
    cout<<"Processed Data: "<<sensor.getProcessedData()<<endl;
    return 0;
}
