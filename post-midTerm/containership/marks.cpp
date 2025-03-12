// composition
#include<iostream>
using namespace std;

class Result{
    private:
        int marks[3], avg = 0;
    public:
        void get(){
            cout<<"Enter marks: "<<endl;
            for(int i=0; i<3; i++){
                cin>>marks[i];
            }
        }
        void average(){
            for(int i=0; i<3; i++){
                avg += marks[i];
            }
            avg /= 3;
            cout<<"Average Marks: "<<avg<<endl;
        }
}; 

class Student : public Result{
    private:
        string name;
        int rollNumber;
        Result res;
    public:
        void get(){
            cout<<"Enter name: ";
            getline(cin, name);
            cout<<"Enter Roll Number: ";
            cin>>rollNumber;
            res.get();
        }    
        void show(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll Number: "<<rollNumber<<endl;
            res.average();
        }
};

int main(){
    Student obj;
    obj.get();
    obj.show();
}