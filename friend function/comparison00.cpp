#include <iostream>
using namespace std;

class MyClass {
    int value;
    
public:

    MyClass(int value) : value(value) { } 
    
    	MyClass compare(const MyClass &obj1, const MyClass &obj2) {
    if (obj1.value > obj2.value)
        return obj1;
    else if (obj1.value < obj2.value)
        return obj2; 
   
}
 friend class YourClass; 
};
class YourClass{

	public:
    void show (const MyClass &result){
    	cout<<"Value="<<result.value<<endl;
    	
	}

};


int main() {
    
    MyClass obj1(10), obj2(20);
    YourClass result;
    MyClass obj3 =obj3.compare(obj1, obj2);
    //int result = compare(obj1, obj2); // Call the friend function
    result.show(obj3);

    /*Print the result
    if (result == 1)
        cout << "Object 1 is greater than Object 2." << endl;
    else if (result == -1)
        cout << "Object 2 is greater than Object 1." << endl;
    else
        cout << "Both objects are equal." << endl;
*/
    return 0;
}

