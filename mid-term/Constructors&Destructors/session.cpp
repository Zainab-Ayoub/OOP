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
    for(int i=0; i<100000000; ++i);
}
