#include<iostream>
using namespace std;

class arithmetic{
private:
	int a, b, c;
	public:
		arithmetic(){
			a=b=c=0;
		}
		void in()
		{
			cout<<"a=";
			cin>>a;
			cout<<"b=";
			cin>>b;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
		arithmetic operator + (arithmetic p){
			arithmetic temp;
			temp.a=p.a+a;
			temp.b=p.b+b;
			return temp;
			
		}
		arithmetic operator - (arithmetic p){
			arithmetic temp;
			temp.a=a-p.a;
			temp.b=b-p.b;
			return temp;
			
		}
		arithmetic operator * (arithmetic p){
			arithmetic temp;
			temp.a=p.a*a;
			temp.b=p.b*b;
			return temp;
			
		}
		arithmetic operator / (arithmetic p){
			arithmetic temp;
			temp.a=a/p.a;
			temp.b=b/p.b;
			return temp;
			
		}
};
int main (){
	arithmetic x,y,z;
	cout<<"Enter Values: "<<endl;
	x.in();
	y.in();
	cout<<"Addition: "<<endl;
	z=x+y;
	z.show();
	cout<<"Subtraction: "<<endl;
	z=x-y;
	z.show();
	cout<<"Multiplication: "<<endl;
	z=x*y;
	z.show();
	cout<<"Division: "<<endl;
	z=x/y;
	z.show();
}