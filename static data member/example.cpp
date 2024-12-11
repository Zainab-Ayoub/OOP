#include<iostream>
using namespace std;

class test{
	private:
		static int n;
		int r;
	public:
		test(){
			n++;
			r=n;
		}
		void display(){
			cout<<"Value: "<<r<<endl;
		}
};
int test::n=0;

int main(){
	test obj1, obj2, obj3;
	obj1.display();
	obj2.display();
	obj3.display();
}