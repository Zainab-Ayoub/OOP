// Create a Book class that includes properties 
// for title, author, and price. 
// Write a method to display book details.

#include<iostream>
using namespace std;

class Books{
	public:
		float price;
		string title, author;
		
		void set(float p, string t, string a){
			price=p;
			title=t;
			author=a;
		}
		
		
		void display(){
			cout<<"Book Name: "<<title<<endl;
			cout<<"Book Author: "<<author<<endl;
			cout<<"Book Price: "<<price<<endl; 	
		}
};

int main(){
	Books obj;
	
	obj.set(150, "The Secret History", "Donna Tartt");
	obj.display();
}