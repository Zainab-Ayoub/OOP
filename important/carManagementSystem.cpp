#include <iostream>
using namespace std;

class Car {
private:
    string name, color;
    int price, model;
    static int carCount; // Static data member

public:
    // Default constructor
    Car() : name("Unnamed"), color("Unpainted"), price(0), model(0) {
        carCount++;
    }

    // Parameterized constructor
    Car(string n, string c, int p, int m) : name(n), color(c), price(p), model(m) {
        carCount++;
    }

    // Copy constructor
    Car(const Car &other) {
        name = other.name;
        color = other.color;
        price = other.price;
        model = other.model;
        carCount++;
    }

    // Destructor
    ~Car() {
        cout << "Object Destroyed: " << name << endl;
    }

    // Static member function to get car count
    static int count() {
        return carCount;
    }

    // Method to display details
    void displayDetails() const {
        cout << "Name: " << name << ", Color: " << color << ", Price: " << price << ", Model: " << model << endl;
    }

    // Method to compare two cars
    Car compareCars(Car &obj) {
        if (price > obj.price) {
            cout << name << " is more expensive than " << obj.name << endl;
            cout << "Updating Car " << obj.name << endl;
            obj.name = name;
            obj.color = color;
            obj.price = price;
            obj.model = model;
            return obj;
        } else if (price < obj.price) {
            cout << obj.name << " is more expensive than " << name << endl;
            cout << "Updating Car " << name << endl;
            name = obj.name;
            color = obj.color;
            price = obj.price;
            model = obj.model;
            return *this;
        } else {
            cout << name << " and " << obj.name << " have the same price." << endl;
            return *this;
        }
    }

    // Friend function to copy and display car details
    friend void displayCarDetails(const Car &car1, const Car &car2);
};

// Define the static member
int Car::carCount = 0;

// Friend function to copy and display car details
void displayCarDetails(const Car &car1, const Car &car2) {
    car1.displayDetails();
    car2.displayDetails();
}

int main() {
    // Create car objects
    Car car1("Toyota", "Red", 30000, 2024);
    Car car2("Honda", "Blue", 25000, 2023);

    // Display car details
    cout << "Car Details:" << endl;
    displayCarDetails(car1, car2);

    // Compare cars
    car1.compareCars(car2);

    // Static member function
    cout << "Total cars: " << Car::count() << endl;

    return 0;
}
