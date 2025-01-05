#include<iostream>
using namespace std;

class pointer {
private:
    int po;
public:
    void setData(int x) {
        po = x;
    }
    void getData() {
        cout << "Enter value: ";
        cin >> po;
    }
    void show() {
        cout << "a=" << po << endl;
    }
};

int main() {
    pointer *ptr = new pointer[3];
    for(int i = 0; i < 3; i++) {
        cout << "value of: " << i+1 << endl;
        (ptr + i)->getData();  
    }
    
    for(int i = 0; i < 3; i++) {
        (ptr + i)->show();
    }
    
    delete[] ptr;
    return 0;
}
