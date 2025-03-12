#include<iostream>
using namespace std;

class Animal{
    public:
        virtual void makeSound(){
            cout<<"Animal makes a sound.\n";
        }
};

class Dog : public Animal{
    public:
        void makeSound(){
            cout<<"dog barks"<<endl;
        }
};

int main(){
    Animal * ptr = new Dog;
    ptr->makeSound();
    delete ptr;
}