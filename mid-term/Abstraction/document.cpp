// Build a Document class with methods to save and print content. 
// The implementation details should remain hidden from the user.

#include<iostream>
#include<fstream>
using namespace std;

class Document{
    private:
        string text;
    public:
        void set(const string &x){
            text = x;
        }

        void save(const string &myFile){
            ofstream file(myFile);
            if(file.is_open()){
                file<<text;
                file.close();
            }
        }

        void print(){
            cout<<text<<endl;
        }
};

int main(){
    Document obj;
    obj.set("Hi there!");
    obj.print();
    obj.save("obj.txt");
}