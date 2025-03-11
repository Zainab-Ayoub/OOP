#include<iostream>
using namespace std;

class Shape{
    public:
        virtual void draw() = 0;
};

class Circle : public Shape{
    public:
        void draw(){
            cout<<"circle\n";
        }
};

class Triangle : public Shape{
    public:
        void draw(){
            cout<<"triangle\n";
        }
};

class Rectangle : public Shape{
    public:
        void draw(){
            cout<<"rectangle\n";
        }
};

int main(){
    Shape *ptr [3];
    ptr[0] = new Circle;
    ptr[1] = new Triangle;
    ptr[2] = new Rectangle;

    for(int i=0; i<3; i++){
        ptr[i]->draw();
    }

    for(int i=0; i<3; i++){
        delete ptr[i];
    }
}