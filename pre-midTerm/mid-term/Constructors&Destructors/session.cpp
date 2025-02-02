// Write a Session class that logs the start time of 
// a user session when an object is 
// created and the end time when the object is destroyed.

#include <iostream>
#include <ctime>  
using namespace std;

class Session {
private:
    time_t startTime;  

public:
    Session() {
        startTime = time(0);  
        cout << "Session started." << endl;
    }
    ~Session() {
        time_t endTime = time(0);  
        cout<<"Session ended. \nDuration: "<<endTime-startTime<<" seconds."<<endl;
    }
};

int main() {
    Session obj;  
    for(int i=0; i<500000; ++i){
        continue;
    }
}
