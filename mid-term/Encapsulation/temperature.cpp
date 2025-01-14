// Write a Temperature class to convert temperatures between Celsius and Fahrenheit. 
// Encapsulate the Celsius and Fahrenheit values using getters and setters.

#include<iostream>
using namespace std;

class Temperature {
    private:
        float celsius;
        float fahrenheit;

    public:
        Temperature() {
            celsius = 0.0;
            fahrenheit = 32.0;  
        }

        void setCelsius(float c){
            celsius = c;
            fahrenheit = (c * 9/5) + 32;  
        }

        void setFahrenheit(float f){
            fahrenheit = f;
            celsius = (f - 32) * 5/9;  
        }

        float getFahrenheit(){
            return fahrenheit;
        }

        float getCelsius() {
            return celsius;
        }

        void celsiusToFahrenheit(){
            fahrenheit=(celsius * 9/5) + 32;
            cout<<celsius<<" Celsius = "<<fahrenheit<<" Fahrenheit"<<endl;
        }

        
        void fahrenheitToCelsius() {
            celsius = (fahrenheit - 32) * 5/9;
            cout<<fahrenheit<<" Fahrenheit = "<<celsius<<" Celsius"<<endl;
        }
};

int main() {
    Temperature temp;
    int choice;
    float x;

    while(true){
        cout<<"Press 1 to set Celsius value\n";
        cout<<"Press 2 to set Fahrenheit value\n";
        cout<<"Press 3 to convert Celsius to Fahrenheit\n";
        cout<<"Press 4 to convert Fahrenheit to Celsius\n";
        cout<<"Press 5 to exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter Celsius value: ";
                cin>>x;
                temp.setCelsius(x);
                break;

            case 2:
                cout<<"Enter Fahrenheit value: ";
                cin>>x;
                temp.setFahrenheit(x);
                break;

            case 3:
                temp.celsiusToFahrenheit();
                break;

            case 4:
                temp.fahrenheitToCelsius();
                break;

            case 5:
                cout<<"Program Exited!\n";
                return 0;

            default:
                cout<<"Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
