#include<iostream>
using namespace std;

class Product{
    private:
        int a;
        char ch;

    public:
        Product(){
            a = 0;
            ch = ' ';  
        }
        Product(int x){
            a = x;
            ch = ' ';  
        }
        Product(char c, int b){
            a = b;
            ch = c;
        }
        Product(const Product &obj){
            a = obj.a;
            ch = obj.ch;
        }

        void show(){
            cout<<"Integer: "<<a<<endl;
            cout<<"Character: "<<ch<<endl;
        }
};

int main() {         
    Product obj1;          
    Product obj2(50);      
    Product obj3('A', 30); 
    Product obj4(obj1);     
    Product obj5 = obj1;   

    obj1.show();
    obj2.show();
    obj3.show();
    obj4.show();
    obj5.show();
}
