#include<iostream>
using namespace std;

class Teacher{
	protected:
		string name, address;
		int age;
	public:
		void input(){
			cout<<"Enter Name: ";
			getline(cin,name);
			cout<<"Enter Address: ";
			getline(cin,address);
			cout<<"Enter Age: ";
			cin>>age;
		} void show(){
			cout<<"Name: "<<name<<endl;
			cout<<"Address: "<<address<<endl;
			cout<<"Age: "<<age<<endl;
		}	
};

class Writer{
	protected:
		string name, address;
		int books;
	public:
		void input(){
			cin.ignore();
			cout<<"Enter Writer's Name: ";
			getline(cin,name);
			cout<<"Enter Writer's Address: ";
			getline(cin,address);
			cout<<"Enter Number of Books: ";
			cin>>books;
		} void show(){
			cout<<"Writer's Name: "<<name<<endl;
			cout<<"Writer's Address: "<<address<<endl;
			cout<<"Number of Books: "<<books<<endl;
		}
};

class Scholar : public Teacher, public Writer{
	public:	
		void input(){
			Teacher :: input();
			Writer :: input();
		} 
		void show(){
			Teacher :: show();
			Writer :: show();
		}
};

int main(){
	Scholar obj;
	obj.input();
	obj.show();
}