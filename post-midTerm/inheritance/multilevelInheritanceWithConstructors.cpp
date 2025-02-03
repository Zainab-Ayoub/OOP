#include<iostream>
using namespace std;

class A{
	protected:
		int a;
	public:	
		A(int n){
			a=n;
			cout<<a<<endl;
		}
};

class B : public A{
	protected:
		int b;
	public:
		B(int m, int n) : A(n){
			b=m;
			cout<<b<<endl;
		}
};

class C : public B{
	private:
		int c;
	public:	
		C(int l, int m, int n) : B(m, n){
			c=l;
			cout<<c<<endl;
		} 
};

int main(){
	C obj(5,10,15);
}