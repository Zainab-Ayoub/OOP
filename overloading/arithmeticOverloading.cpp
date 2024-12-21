#include<iostream>
using namespace std;
/*
return_type operator op()
{
Body
}*/
class add{
private:
	int a, b, c;
	public:
		add(){
			a=b=c=0;
		}
		void in()
		{
			cout<<"a=";
			cin>>a;
			cout<<"b=";
			cin>>b;
				cout<<"c=";
			cin>>c;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
		add operator + (add p){
			add temp;
			temp.a=p.a+a;
			temp.b=p.b+b;
			temp.c=p.c+c;
			return temp;
			
		}
};
int main (){
	add x,y,z, t;
	x.in();
	y.in();
	t.in();
	z=x+y+t;
	z.show();
	return 0;
}