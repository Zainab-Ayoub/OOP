#include<iostream>
using namespace std;

class Person{
    protected:
        string name, id;
    public:
        Person(){
            cout<<"Enter name: ";
            getline(cin, name);
            cout<<"Enter id: ";
            getline(cin, id);
        }    
        virtual void showInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
        }
};

class Student : public Person{
    private:
        string major;
    public:
        Student(){
            cout<<"Enter major: ";
            getline(cin, major);
            cin.ignore();
        }
        void showInfo(){
            Person :: showInfo();
            cout<<"Major: "<<major<<endl;
        }    
};

class Teacher : public Person{
    private:
        string department;
    public:
        Teacher(){
            cout<<"Enter department: ";
            getline(cin, department);
            cin.ignore();
        }
        void showInfo(){
            Person :: showInfo();
            cout<<"Department: "<<department<<endl;
        }    
};

int main(){
    Person *ptr[2];
    ptr[0] = new Student;
    ptr[1] = new Teacher;
    for(int i=0; i<2; i++){
        ptr[i]->showInfo();
    }
    for(int i=0; i<2; i++){
        delete ptr[i];
    }
}