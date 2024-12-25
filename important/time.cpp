#include<iostream>
using namespace std;

class Time{
    private: 
        int hr, min, sec;
    public:
        Time(){
            hr=5;
            min=58;
            sec=55;
        }    
        void show(){
            cout<<"Hours: "<<hr<<endl;
            cout<<"Minutes: "<<min<<endl;
            cout<<"Seconds: "<<sec<<endl;
        }
        Time operator++(){
            ++min;
            if(min>59){
                min=0;
                sec=0;
                ++hr;
            }
            return *this;
        } 
        Time operator--(){
            --min;
            if(min<0){
                min=59;
                sec=59;
                --hr;
            }
            return *this;
        } 
};

int main(){
    int c;
    Time obj;
    obj.show();
    temp:
    cout<<"Press 1 to increment minutes \nPress 2 to decrement minutes \nPress 3 to exit the program"<<endl;
    cin>>c;
    switch(c){
        case 1:
            ++obj;
            obj.show();
            goto temp;
        case 2:
            --obj;
            obj.show();
            goto temp;
        case 3:
            cout<<"Program Exited!"<<endl;    
        default:
            cout<<"Error!"<<endl;        
    }
}