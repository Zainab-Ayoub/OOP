// Implement a Student class with private attributes for marks in three subjects. 
// Add public methods to calculate the total and average marks.

#include<iostream>
using namespace std;

class Marks{
    private:
        int a, b, c;

    public:
        void set(int x, int y, int z){
            a = x;
            b = y;
            c = z;
        }    
        int sum(){
            return a+b+c;
        }
        float avg(){
            return (a + b + c)/3.0;
        }
};

int main(){
    Marks student;
    student.set(15,10,5);
    cout<<"Sum: "<<student.sum()<<endl;
    cout<<"Average: "<<student.avg();
}