#include<iostream>
using namespace std;

class B;

class A{
    private:
        int a;
    public:
        A(){
            a=10;
        }    
        friend void show(A x, B y);
};

class B{
    private:
        int b;
    public:
        B(){
            b=20;
        }  
        friend void show(A x, B y);
};

void show(A x, B y){
    int sum;
    sum = x.a + y.b;
    cout<<"Value of a: "<<x.a<<endl;
    cout<<"Value of b: "<<y.b<<endl;
    cout<<"Sum of a & b: "<<sum<<endl;
}

int main(){
    A obj1;
    B obj2;
    show(obj1, obj2);
}