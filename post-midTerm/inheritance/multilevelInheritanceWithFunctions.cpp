#include<iostream>
using namespace std;

class A{
	protected:
		int a;
	public:	
		void set(int n){
			a=n;
			cout<<a<<endl;
		}
};

class B : public A{
	protected:
		int b;
	public:
		void set(int m, int n){
			A :: set(n);
			b=m;
			cout<<b<<endl;
		}
};

class C : public B{
	private:
		int c;
	public:	
		void set(int l, int m, int n){
			B :: set(m, n);
			c=l;
			cout<<c<<endl;
		} 
};

int main(){
	C obj1;
	obj1.set(5, 10, 15);
}