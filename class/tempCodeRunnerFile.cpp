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
            cout<<"ID: "<<bookID<<endl;        
            cout<<"Pages: "<<pages<<endl;        
            cout<<"Price: "<<price<<endl;        
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
    Book b1, b2;
    int bookID, pages, price;
    
    cout<<"Enter Book 1 Details: ";
    b1.get();
    
    cout<<"Enter Book 2 Details: ";
    cout<<"Enter ID: ";
    cin>>bookID;
    cout<<"Enter pages: ";
    cin>>pages;
    cout<<"Enter price: ";
    cin>>price;
    b2.set(bookID, pages, price);
    
    cout<<endl;

    b1.show();
    b2.show();

    if(b1.getPrice() > b2.getPrice()){
        cout<<"Book 1 is more costly than Book 2.";
    }
    else if(b1.getPrice() < b2.getPrice()){
        cout<<"Book 2 is more costly than Book 1.";
    }
    else{
        cout<<"Both are of same price.";
    }
}