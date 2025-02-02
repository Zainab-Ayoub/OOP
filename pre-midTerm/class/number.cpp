#include<iostream>
using namespace std;

class Number{
    private:
        int n;
    public:
        void numType(){
            cout<<"Enter a number: ";
            cin>>n;
            if (n%2==0){
                cout<<n<<" is even."<<endl;
            }
            else{
                cout<<n<<" is odd"<<endl;
            }            
        }   
        int factorial(int num){
            n = num;
            if (n==0){
                return 1;
            }
            else{
                return n*factorial(n-1);
            }
        } 
};

int main(){
    Number x;
    x.numType();
    cout<<"Factorial of 5 is: "<<x.factorial(5);
}