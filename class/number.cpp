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
                cout<<n<<" is even.";
            }
            else{
                cout<<n<<" is odd";
            }            
        }    
};

int main(){

}