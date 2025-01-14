// Create a Shape class to represent geometric shapes with methods to calculate area and perimeter. 
// Use only abstract definitions (no inheritance).

#include <iostream>
using namespace std;

double pi = 3.14159;

class Circle {
    private:
        double radius;
    public:
        Circle(double rad){
            radius = rad;
        }
        double calculateArea(){
            return pi * radius * radius;
        }
        double calculatePerimeter(){
            return 2 * pi * radius;
        }
};

class Rectangle {
    private:
        double length, width;
    public:
        Rectangle(double len, double wid){
            length = len;
            width = wid; 
        }
        double calculateArea(){
            return length * width;
        }
        double calculatePerimeter(){
            return 2 * (length + width);
        }
};

int main() {
    Circle circle(7.0);
    Rectangle rectangle(4.2, 8.0);
    
    cout<<"Circle: "<<endl;
    cout<<"Area: "<<circle.calculateArea()<<endl;
    cout<<"Perimeter: "<<circle.calculatePerimeter()<<endl;
    
    cout<<"Rectangle: "<<endl;
    cout<<"Area: "<<rectangle.calculateArea()<<endl;
    cout<<"Perimeter: "<<rectangle.calculatePerimeter()<<endl;
    
    return 0;
}