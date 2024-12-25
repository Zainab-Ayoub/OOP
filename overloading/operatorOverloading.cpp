#include <iostream>
using namespace std;

class count {
private:
    int n;

public:
    count() {
        n = 0;
    }

    void show() {
        cout << "n = " << n << endl;
    }

    // Prefix increment (returning updated value)
    count operator++() {
        ++n; // Increment
		return *this; // Return updated object
    }

    // Postfix increment (returning original value)
    count operator++(int) {
        count temp = *this; // Store current state
        ++n; // Increment the value
        return temp; // Return original state
    }
    // Prefix decrement (returning updated value)
    count operator--() {
        --n; // decrement
		return *this; // Return updated object
    }

    // Postfix decrement (returning original value)
    count operator--(int) {
        count temp = *this; // Store current state
        --n; // Decrement the value
        return temp; // Return original state
    }
};

int main() {
    count obj, a, c;

    obj.show();

    // Prefix increment
    ++obj;
    obj.show();

    // Postfix increment
    obj++;
    obj.show();

    // Assign prefix increment result
    a = ++obj;
    a.show();

    // Assign postfix increment result
    c = obj++;
    c.show();
    
    // Prefix decrement
    --obj;
    obj.show();

    // Postfix decrement
    obj--;
    obj.show();

    // Assign prefix decrement result
    a = --obj;
    a.show();

    // Assign postfix decrement result
    c = obj--;
    c.show();
    
    return 0;
}