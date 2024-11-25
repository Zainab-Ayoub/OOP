// Write a class Book with three data members BookID, Pages and Price. 
// It also contains the following member function:
// The get() function is used to input values
// The show() function is used to display values
// The set() function is used to set the values of data members using parameters
// getPrice() function is used to return the value of Price.
// The program should create two objects of the class and input values for these objects. 
// The program displays the details of the most costly book.

#include<iostream>
using namespace std;

class Book{
    private:
        int bookID, pages, price;

    public:
        void get(){
            cout<<"Enter ID: ";
            cin>>bookID;        
            cout<<"Enter pages: ";
            cin>>pages;        
            cout<<"Enter price: ";
            cin>>price;        
        } 
        void show(){
            cout<<"ID: "<<bookID;        
            cout<<"Pages: "<<pages;        
            cout<<"Price: "<<price;        
        }  
        void set(int id, int pg, int pr){
            bookID = id;
            pages = pg;
            price = pr;
        } 
        int getPrice(){
            return price;
        }       
};

int main(){

}