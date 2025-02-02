//	Create a Person class with a constructor that initializes 
// attributes like name, age, and gender. 
// Include a destructor to display a message when an 
// object is destroyed.

#include<iostream>
using namespace std;

class Person{
    private:
        string name, gender;
        int age;
    public:
        Person(){
            name = "unknown";
            age = 0;
            gender = "unknown";
        }    
        Person(string n, int a, string g){
            name = n;
            age = a;
            gender = g;
        }    
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Gender: "<<gender<<endl;
        }
        ~Person(){
            cout<<"Object is destroyed!"<<endl;
        }    
};
int main(){
    string name, gender;
    int age;
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter gender: ";
    cin>>gender;
    Person person(name, age, gender);
    person.display();
}