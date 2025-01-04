#include<iostream>
using namespace std;
class pointer
{
	private:
		int po;
		public:
			void setData(int x)
			{
				po=x;
			}
			void getData() 
			{
				cout<<"Enter value:"<<po<<endl;
				
			}
			void show()
			{
				cout<<"a="<<po<<endl;
			}
   	
};
int main()
{
	//pointer *ptr= new pointer[5];
	pointer *ptr=new pointer[3];
	int a, i;
	for(i=0; i<3; i++)
	{
		cout<<"value of:"<<i+1<<endl;
		cin>>a;
	ptr->setData(a);
	//ptr->show();
}ptr->show();
	return 0;
}

/*
int main()
{
	int n=6;
	int *p= &n;
	cout<<"The value of p is:"<<*p<<endl;
	cout<<"The value of p is:"<<*p+1<<endl;
	cout<<"The value of p is:"<<*p+2<<endl;
	cout<<"The address of value p is:"<<p<<endl;
	cout<<"The address of value n is:"<<&n<<endl;
	cout<<"The value n is:"<<n<<endl;
	int **c=&p; //pointer to pointer
	cout<<"The address of value pointer to pointer is:"<<c<<endl;
	
	//new keyword
	int *a= new int(5);
	cout<<"The address of value new is:"<<*a<<endl;
	
	int *arr=new int[3];
	*(arr)=12; //arr[0]=12;
	*(arr+1)=13; //arr[1]=13;
	*(arr+2)=14; //arr[2]=14;
	for(int i=0; i<3; i++){
		cout<<arr[i]<<endl;
	}
	*(arr)=12; //arr[0]=12;
	*(arr+1)=13; //arr[1]=13;
	*(arr+2)=14; //arr[2]=14;
	//delete arr;
	cout<<"Value at index arr[0]:"<<arr[0]<<endl;
	cout<<"Value at index arr[1]:"<<arr[1]<<endl;
	cout<<"Value at index arr[2]:"<<arr[2]<<endl; 
	
}*/