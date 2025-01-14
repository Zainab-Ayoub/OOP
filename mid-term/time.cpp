#include<iostream>
using namespace std;

class Clock {
    private:
        int hr, min, sec;

    public:
        Clock(){
            hr = 5;
            min = 58;
            sec = 55;
        }

        void show(){
            cout<<"Hours: "<<hr<<endl;
            cout<<"Minutes: "<<min<<endl;
            cout<<"Seconds: "<<sec<<endl;
        }

        Clock operator++(){
            ++sec;
            if(sec > 59){
                sec = 0;
                ++min;
                if(min > 59){
                    min = 0;
                    ++hr;
                    if(hr > 23){ 
                        hr = 0;
                    }
                }
            }
            return *this;
        }

        Clock operator--(){
            --sec;
            if(sec < 0){
                sec = 59;
                --min;
                if(min < 0){
                    min = 59;
                    --hr;
                    if(hr < 0){ 
                        hr = 23;
                    }
                }
            }
            return *this;
        }
};

int main() {
    int c;
    Clock obj;
    obj.show(); 

    while(true){
        cout<<"Press 1 to increment seconds\n"
            <<"Press 2 to decrement seconds\n"
            <<"Press 3 to exit the program\n";
        cin>>c;

        switch(c){
            case 1:
                ++obj;
                obj.show();
                break;
            case 2:
                --obj;
                obj.show();
                break;
            case 3:
                cout << "Program Exited!" << endl;
                return 0;
            default:
                cout << "Error! Invalid input." << endl;
        }
    }
}
