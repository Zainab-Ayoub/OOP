#include<iostream>
using namespace std;

class Book{
	protected:
		string bookID, bookName;
		int price;
	public:
		void input(){
			cout<<"Enter Book ID: ";
			getline(cin,bookID);
			cout<<"Enter Book Name: ";
			getline(cin,bookName);
			cout<<"Enter Price: ";
			cin>>price;
		} void show(){
			cout<<"Book ID: "<<bookID<<endl;
			cout<<"Book Name: "<<bookName<<endl;
			cout<<"Price: "<<price<<endl;
		}	
};

class Writer{
	protected:
		string name, address;
		int numberOfBooks;
		string books[5];
	public:
		void input(){
			cin.ignore();
			cout<<"Enter Writer's Name: ";
			getline(cin,name);
			cout<<"Enter Writer's Address: ";
			getline(cin,address);
			cout<<"Enter Number of Books: ";
			cin>>numberOfBooks;
			cout<<"Enter Book's Name: "<<endl;
			for(int i=0; i<5; i++){
				cin>>books[i];
			}
		} void show(){
			cout<<"Writer's Name: "<<name<<endl;
			cout<<"Writer's Address: "<<address<<endl;
			cout<<"Number of Books: "<<numberOfBooks<<endl;
			for(int i=0; i<5; i++){
				cout<<"Book "<<i+1<<": "<<books[i]<<" "<<endl;
			}
		}
};

class Scholar : public Book, public Writer{
	public:	
		void input(){
			Book :: input();
			Writer :: input();
		} 
		void show(){
			Book :: show();
			Writer :: show();
		}
};

int main(){
	Scholar obj;
	obj.input();
	obj.show();
}