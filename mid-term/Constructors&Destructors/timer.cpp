#include <iostream>
#include <ctime>
using namespace std;

class Timer {
private:
    time_t startTime;
public:
    Timer(){
        startTime = time(0);
        cout<<"Timer started."<<endl;
    }
    
    void displayElapsed(){  
        time_t currentTime = time(0);
        cout<<"Duration: "<<currentTime - startTime<<" seconds."<<endl;
    }
};

int main() {
    Timer obj;

    for(int i=0; i<500000; ++i){
        continue;
    }
    
    obj.displayElapsed(); 
}