#include<iostream>
using namespace std;

class A{
	protected:
		int a;
	public:	
		void input(){
			cout<<"a= ";
			cin>>a;
		}
		void show(){
			cout<<"a= "<<a<<endl;
		}
};

class B{
	protected:
		int b;
	public:
		void input(){
			cout<<"b= ";
			cin>>b;
		}
		void show(){
			cout<<"b= "<<b<<endl;
		}
};

class C : public A, public B{
	private:
		int c;
	public:	
		void input(){
			A :: input();
			B :: input();
			cout<<"c= ";
			cin>>c;
		} 
		void show(){
			A :: show();
			B :: show();
			cout<<"c= "<<c<<endl;
		}
};

int main(){
	C obj;
	obj.input();
	obj.show();
}