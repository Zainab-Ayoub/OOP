#include<iostream>
using namespace std;

class A{
    private:
        int a, b;
    public:
        A(){
            a=10;
            b=20;
        }    
        friend class B;
};

class B{
    public:
        void showA(A x){
            cout<<"The value of a: "<<x.a<<endl;
        }
        void showB(A y){
            cout<<"The value of b: "<<y.b<<endl;
        }
};

int main(){
    A obj1;
    B obj2;
    obj2.showA(obj1);
    obj2.showB(obj1);
}