#include<iostream>
using namespace std;

class Time{
    private: 
        int hr, min, sec;
    public:
        Time(){
            hr=5;
            min=45;
            sec=55;
        }    
        void show(){
            cout<<"Hours: "<<hr<<endl;
            cout<<"Minutes: "<<min<<endl;
            cout<<"Seconds: "<<sec<<endl;
        }
        Time operator++(){
            ++min;
            if(min>60){
                min=0;
                sec=0;
                ++hr;
            }
        } 
        Time operator--(){
            --min;
            if(min<0){
                min=59;
                sec=59;
                --hr;
            }
        } 
};

int main(){
    int c;
    Time obj;
    obj.show();
    cout<<"Press 1 to increment minutes \n Press 2 to decrement minutes"<<endl;
    cin>>c;
    switch(c){
        case 1:
            ++obj;
            obj.show();
            break;
        case 2:
            --obj;
            obj.show();
            break;
        default:
            cout<<"Error!"<<endl;        
    }
}