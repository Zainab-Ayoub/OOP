#include<iostream>
using namespace std;

class abc{
    private:
        int password=12345, p1, p2;
        string username = "BSCS", u;
    public:
        void login(){
            while(true){
                cout<<"Enter your username: ";
                cin>>u;
                if(u==username){
                    for(int i=0; i<3; i++){
                        cout<<"Enter Password: ";
                        cin>>p1;
                        if(p1==password){

                        }
                        else
                            cout<<"Wrong Password, Try Again."<<endl;    
                    }
                    if(p1!=password){
                        cout<<"Enter New Password: "<<endl;
                        cin>>p2;
                        password=p2;
                        cout<<"Your password has been reset"<<endl;
                    }
                }
                else{
                    cout<<"Wrong Username, Try Again."<<endl;
                }
            }
        }
};

int main(){
    abc xyz;
    xyz.login();
}