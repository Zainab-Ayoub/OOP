// Write a class Marks with three data members to store three marks. 
// Write three member functions to input marks, sum function
// to calculate and return the sum and average function to 
// calculate and return the average marks.

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
            return ( a + b + c )/3.0;
        }
};

int main(){
    Marks student;
    student.set(15,10,5);
    cout<<"Sum: "<<student.sum()<<endl;
    cout<<"Average: "<<student.avg();
}