#include<iostream>
using namespace std;

class A {
public:
    int value;
    A() { value = 10; }
};

class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {};

int main() {
    D obj;
    cout << "Value: " << obj.value << endl; // No ambiguity due to virtual inheritance
    return 0;
}