#include<iostream>
using namespace std;

class Test{
    private:
        int a;
        char ch;

    public:
        Test(){
            cout<<"Enter a value: ";
            cin>>a;
        }
        Test(int x){
            a=x;
        }
        Test(char c, int b){
            a=b;
            ch=c;
        }
        void show();
};

void Test :: show(){
    cout<<"Integer: "<<a<<endl;
    cout<<"Character: "<<ch<<endl;
}

int main(){
    Test obj;
    Test obj1;
    Test obj2(50);
    Test obj3('A', 30);
    Test obj4(obj);
    Test obj5=obj1;

    obj.show();
    obj1.show();
    obj2.show();
    obj3.show();
    obj4.show();
    obj5.show();
}