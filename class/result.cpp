#include<iostream>
using namespace std;

class Result{
    private:
        int r, m[3];
        string n;

    public:
        void info(){
            cout<<"Enter name: ";
            cin>>n;
            cout<<"Enter roll number: ";
            cin>>r;
            cout<<"Enter marks: ";
            for(int i=0; i<3; i++){
                cin>>m[i];
            }
        }   
        void show(){
            cout<<"Name: "<<n<<endl;
            cout<<"Roll Number: "<<r<<endl;
            cout<<"Marks: "<<endl;
            for(int i=0; i<3; i++){
                cout<<m[i]<<endl;
            }
        } 
};

int main(){

}