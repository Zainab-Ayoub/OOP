#include<iostream>
using namespace std;

class pointer{
private:
    int x;
public:
    void setData(){
        x = x*2;
    }
    void getData(){
        cout<<"Enter value: ";
        cin>>x;
    }
    void show(){
        cout<<"Value="<<x<<endl;
    }
};

int main(){
    pointer *ptr = new pointer[3];
    for(int i=0; i<3; i++){
        (ptr+i)->getData();
        (ptr+i)->setData();  
    }
    
    for(int i=0; i<3; i++){
        (ptr+i)->show();
    }
    
    delete[] ptr;
    return 0;
}
