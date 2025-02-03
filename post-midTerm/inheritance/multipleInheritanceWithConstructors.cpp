#include<iostream>
using namespace std;

class A{
	protected:
		int a;
	public:	
		A(int n){
			a=n;
		}
		void show(){
			cout<<a<<endl;
		}
};

class B{
	protected:
		int b;
	public:
		B(int m){
			b=m;
		}
		void show(){
			cout<<b<<endl;
		}
};

class C : public A, public B{
	private:
		int c;
	public:	
		C(int l, int m, int n) : A(m), B(n){
			c=l;
		} 
		void show(){
			A :: show();
			B :: show();
			cout<<c<<endl;
		}
};

int main(){
	C obj(5, 10, 15);
	obj.show();
}