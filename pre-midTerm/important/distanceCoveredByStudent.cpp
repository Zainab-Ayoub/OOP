// This activity is designed for students to practice constructors, constructor overloading, destructors, static members, and object as function parameters, and object-returning functions.
#include <iostream>
using namespace std;

// Class Travel
class Travel {
private:
    float kilometers;
    float hours;

public:
    // Static data member to count objects
    static int objectCount;

    // Default constructor
    Travel() : kilometers(0), hours(0) {
        objectCount++;
    }

    // Parameterized constructor
    Travel(float km, float hrs) : kilometers(km), hours(hrs) {
        objectCount++;
    }

    // Copy constructor
    Travel(const Travel &obj) {
        kilometers = obj.kilometers;
        hours = obj.hours;
        objectCount++;
    }

    // Destructor
    ~Travel() {
        cout << "Destructor called for object." << endl;
    }

    // Member function to input values
    void get() {
        cout << "Enter kilometers: ";
        cin >> kilometers;
        cout << "Enter hours: ";
        cin >> hours;
    }

    // Member function to display values
    void show() const {
        cout << "Kilometers: " << kilometers << ", Hours: " << hours << endl;
    }

    // Member function to add travel distances and times
    void add(const Travel &t) {
        kilometers += t.kilometers;
        hours += t.hours;
    }

    // Member function to return an object
    Travel addAndReturn(const Travel &t) {
        Travel temp(kilometers + t.kilometers, hours + t.hours);
        return temp;
    }

    // Static member function
    static void showObjectCount() {
        cout << "Number of Travel objects created: " << objectCount << endl;
    }
};

// Initialize static data member
int Travel::objectCount = 0;

// Class Student
class Student {
private:
    static int rollCounter; // Static roll counter
    int rollNumber;

public:
    // Default constructor
    Student() {
        rollCounter++;
        rollNumber = rollCounter;
    }

    void showRollNumber() const {
        cout << "Student Roll Number: " << rollNumber << endl;
    }
};

// Initialize static roll counter
int Student::rollCounter = 0;

// Main Function
int main() {
    // Demonstrating the Travel class
    Travel t1; // Default constructor
    Travel t2(50, 5); // Parameterized constructor
    Travel t3 = t2; // Copy constructor

    cout << "Travel object t1: ";
    t1.show();

    cout << "Travel object t2: ";
    t2.show();

    cout << "Travel object t3 (copy of t2): ";
    t3.show();

    t1.get();
    cout << "After input, t1: ";
    t1.show();

    t1.add(t2); // Adding objects
    cout << "After adding t2 to t1: ";
    t1.show();

    Travel t4 = t1.addAndReturn(t2); // Returning an object
    cout << "Object returned after adding t1 and t2: ";
    t4.show();

    // Static member function
    Travel::showObjectCount();

    // Demonstrating the Student class
    Student s1, s2, s3; // Creating three objects
    s1.showRollNumber();
    s2.showRollNumber();
    s3.showRollNumber();

    return 0;
}

// Explanation of Features Implemented:
// Default Constructor: Initializes kilometers and hours to 0.
// Parameterized Constructor: Allows initialization with specific values.
// Copy Constructor: Initializes a new object as a copy of an existing one.
// Destructor: Prints a message when an object is destroyed.
// Static Data Member: Tracks the number of Travel objects created.
// Object as Function Parameters: Used in the add function.
// Returning Object from Function: Demonstrated in addAndReturn.
// Student Class: Tracks unique roll numbers using a static member.
