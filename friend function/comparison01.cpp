#include <iostream>
using namespace std;

class MyClass {
    int value;

public:
    MyClass(int val) : value(val) { } // Constructor to initialize value

    // Declare the friend function
    friend int compare(const MyClass &obj1, const MyClass &obj2);
};

// Friend function to compare two objects
int compare(const MyClass &obj1, const MyClass &obj2) {
    if (obj1.value > obj2.value)
        return 1;  // Return 1 if obj1 is greater
    else if (obj1.value < obj2.value)
        return -1; // Return -1 if obj2 is greater
    else
        return 0;  // Return 0 if both are equal
}

int main() {
    MyClass obj1(10), obj2(20); // Create two objects

    int result = compare(obj1, obj2); // Call the friend function

    // Print the result
    if (result == 1)
        cout << "Object 1 is greater than Object 2." << endl;
    else if (result == -1)
        cout << "Object 2 is greater than Object 1." << endl;
    else
        cout << "Both objects are equal." << endl;

    return 0;
}

