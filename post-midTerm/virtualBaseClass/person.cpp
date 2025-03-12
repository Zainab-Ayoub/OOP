// virtual inheritance
#include<iostream>
using namespace std;

class Person{
    protected:
        string name;
    public:
        Person(){
            name = "unknown";
        }    
};

class Admin : virtual public Person{

};

class LibraryStaff : virtual public Person{

};

class Professor : public Admin, public LibraryStaff{
    public:
        void getName(){
            cout<<"Enter name: ";
            getline(cin, name);
        } void showName(){
            cout<<"Name: "<<name<<endl;
        }
};

int main(){
    Professor obj; 
    obj.getName();
    obj.showName();
}