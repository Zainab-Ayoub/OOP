#include<iostream>
using namespace std;

class abc{
    private:
        int password=12345, p1, p2;
        string username = "BSCS", u;
        char c;
        int v, a[100], sum=0;
        int max=0, min=1000;
        int search;
        int e=0, o=0, t=0;

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
                            cout<<"Login Successful!"<<endl;
                            menu();
                            return;
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
        void menu(){
            options:
            cout<<"Press '1' to input values in an array & display the sum."<<endl;
            cout<<"Press '2' to display maximum value of an array."<<endl;
            cout<<"Press '3' to display minimum value of an array."<<endl;
            cout<<"Press '4' to search the values in an array."<<endl;
            cout<<"Press '5' to check EVEN/ODD values of an array."<<endl;
            cout<<"Press '6' to check number of values in an array."<<endl;
            cout<<"Press '0' to EXIT the program."<<endl;
            cin>>c;
            switch(c){
                case '1':
                    inputArray();
                    goto options;

                case '2':
                    findMax();
                    goto options;

                case '3':
                    findMin();
                    goto options;  

                case '4':
                    searchValue();
                    goto options;

                case '5':
                    evenOdd();
                    goto options;

                case '6':
                    totalValue();
                    goto options;

                case '0':
                    cout<<"Application terminated successfully!";
                    break;  

                default:
                    cout<<"Invalid Input";
            }
        }
        void inputArray(){
            cout<<"How many values do you want to add? ";
            cin>>v;
            cout<<"Enter values: "<<endl;
            for(int i=0; i<v; i++){
                cin>>a[i];
            }
            for(int i=0; i<v; i++){
                sum += a[i];
            }
            cout<<"Sum of values: "<<sum<<endl;
        }
        
        void findMax(){
            for(int i=0; i<v; i++){
                if(max<a[i])
                    max = a[i];
            }
            cout<<"Maximum Number: "<<max<<endl;
        }

        void findMin(){
            for(int i=0; i<v; i++){
                if(min>a[i])
                    min = a[i];
            }
            cout<<"Minimum Number: "<<min<<endl;
        }
        
        void searchValue(){
            cout<<"Enter a value you want to search: ";
            cin>>search;
            for(int i=0; i<v; i++){
                if(search==a[i])
                    cout<<"The value "<<search<<" is at index: "<<i<<endl;
            }
        }

        void evenOdd(){
            for(int i=0; i<v; i++){
                if(a[i]%2==0){
                    cout<<"Even: "<<a[i]<<endl;
                    e++;
                }
                else{
                    cout<<"Odd: "<<a[i]<<endl;
                    o++;
                }
            }
            cout<<"Total Number of Even Numbers are: "<<e<<endl;
            cout<<"Total Number of Odd Numbers are: "<<o<<endl;
        }

        void totalValue(){
            for(int i=0; i<v; i++){
                t++;
            }
            cout<<"Total Number of values in array: "<<t<<endl;
        }
};

int main(){
    abc xyz;
    xyz.login();
}