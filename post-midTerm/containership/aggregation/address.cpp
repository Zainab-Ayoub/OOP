#include<iostream>
using namespace std;

class address{
    protected:
        string studentAddress;
    public:
        address(){
            studentAddress = "";    
        }
        void getAddress(){
            cout<<"Enter address: ";
            getline(cin,studentAddress);
        } void showAddress(){
            cout<<"Address: "<<studentAddress<<endl;
        }   
};

class student{
    private:
        string name;
        address *obj2;
    public:
        student(address *obj1){
            name = "";
            obj2 = obj1;
        }
        void getName(){
            cout<<"Enter name: ";
            getline(cin, name);
            obj2->getAddress();
        } void showName(){
            cout<<"Name: "<<name<<endl;
            obj2->showAddress();
        }   
};

int main(){
    address obj1;
    student obj2(&obj1);
    obj2.getName();
    obj2.showName();
}