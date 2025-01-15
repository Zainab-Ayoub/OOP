#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;

class Timer {
private:
    time_point<high_resolution_clock> beg;
    time_point<high_resolution_clock> end;

public:
    Timer(){
        beg = high_resolution_clock::now();
    }
    void displayElapsedTime(){
        end = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end - beg);
        cout << "Elapsed Time: " << duration.count() << " microseconds" << endl;
    }
};

int main() {
    Timer obj;
    for (int i = 0; i < 50000; i++)
        continue;
    obj.displayElapsedTime();    
}
