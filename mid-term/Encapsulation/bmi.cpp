// Implement a HealthProfile class with private attributes like height and weight. 
// Add methods to calculate BMI.

#include <iostream>
using namespace std;

class healthProfile{
    private:
        float height, weight;  

    public:
        healthProfile(float h, float w){
            height = h;
            weight = w;
        }

        float calculateBMI(){
            if(height > 0 && weight > 0){
                return weight / (height * height);  
            } else{
                cout<<"Invalid height!"<<endl;
                return -1;
            }
        }

        void display(){
            cout<<"Height: "<<height<<" meters"<<endl;
            cout<<"Weight: "<<weight<<" kg"<<endl;
            // cout<<"BMI: "<<calculateBMI();
            float bmi = calculateBMI();
            if(bmi != -1){
                cout<<"BMI: "<<bmi<<endl;
            }
        }
};

int main() {
    float height, weight;
    
    cout<<"Enter height in meters: ";
    cin>>height;
    cout<<"Enter weight in kilograms: ";
    cin>>weight;

    healthProfile profile(height, weight);

    profile.display();
}
