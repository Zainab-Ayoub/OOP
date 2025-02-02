#include<iostream>
using namespace std;
class A
{
	private:
		int a,b;
		public:
			//method1
			A& setData1(int a, int b)
			{
				this->a=a;
				this->b=b;
				return *this;
			}
			//method2
			A& setData2(int *a, int *b){
			 	this->a=*a;
			 	this->b=*b;
			 	return *this;
			}
			//method3
			A setData3(int *a, int *b){
				A z;
			 	z.a=*a;
			 	z.b=*b;
			 	return z;
			}
			//method4
			A* setData4(int *a, int *b){
				A *z = new A();
				z->a=*a;
			 	z->b=*b;
			 	return z;
			}
			void show()
			{
				cout<<"Value of a="<<a<<endl;
				cout<<"Value of b="<<b<<endl;
			}
};
int main()
{
	A obj;
	int x=5, y=10;
	//method1
	obj.setData1(x,y).show();
	//method2
	obj.setData2(&x,&y).show();
	//method3
	obj.setData3(&x,&y).show();
	//obj.show();
	A *newObj = obj.setData4(&x,&y);
	newObj->show();
	delete newObj;
	return 0;
}
