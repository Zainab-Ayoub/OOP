// Create a FileHandler class that opens a file when an object 
// is instantiated and closes it when the object is destroyed

#include <iostream>
#include <fstream>
using namespace std;

class FileHandler {
private:
    ofstream file; 

public:
    FileHandler(const string &myFile){
        file.open(myFile);
        if(file.is_open()){
            cout<<"File opened: "<<myFile<<endl;
        } else{
            cout<<"Failed to open file: "<<myFile<<endl;
        }
    }
    ~FileHandler(){
        if (file.is_open()){
            file.close();
            cout<<"File closed"<<endl;
        }
    }
    void writeData(const string &data){
        if(file.is_open()){
            file<<data<<endl;  
            cout<<"Data written to file: "<<data<<endl;
        }
    }
};

int main() {
    FileHandler fileHandler("obj.txt");  

    fileHandler.writeData("Hello, World!");
}
