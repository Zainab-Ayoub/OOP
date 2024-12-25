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
};