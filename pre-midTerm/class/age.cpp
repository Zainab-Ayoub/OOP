// Create a class Person that has two attributes: name and age. 
// Implement getter and setter methods for the age attribute. 
// Additionally, write a method that compares the age of two 
// Person objects and returns which person is older or if they 
// are the same age.

#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
        int age;
        string name;

    public:
        void setName(string n){
            name = n;
        }    
        string getName(){
            return name;   
        }
        void setAge(int a){
            age = a;
        }    
        int getAge(){
            return age;   
        }
};

int main(){
    Person p1, p2;
    string name;
    int age;

    cout<<"Person 1 Details: "<<endl;
    cout<<"Name: ";
    cin>>name;
    p1.setName(name);
    cout<<"Age: ";
    cin>>age;
    p1.setAge(age);

    cout<<"Person 2 Details: "<<endl;
    cout<<"Name: ";
    cin>>name;
    p2.setName(name);
    cout<<"Age: ";
    cin>>age;
    p2.setAge(age);    

    if(p1.getAge() > p2.getAge()){
        cout<<p1.getName()<<" is older than "<<p2.getName();
    }
    else if(p2.getAge() > p1.getAge()){
        cout<<p2.getName()<<" is older than "<<p1.getName();
    }
    else{
        cout<<"Both are of same age.";
    }
}
