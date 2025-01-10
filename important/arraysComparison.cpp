#include<iostream>
using namespace std;

class Array{
	private:
		int x[5];
	public:	
		Array(){
			for(int i=0; i<5; i++){
				x[i]=-1;
			}
		}
		void input(){
			cout<<"Enter values: "<<endl;
			for(int i=0; i<5; i++){
				cin>>x[i];
			}
		}
		void show(){
			cout<<"Values: "<<endl;
			for(int i=0; i<5; i++){
				cout<<x[i]<<"\t";
			}
		}
		bool operator== (const Array a){
			for(int i=0; i<5; i++){
				if(x[i] == a.x[i]){
					return true;
				} else{
					return false;	
				}	
			} 
		}
};

int main(){
	Array arr1, arr2;
	arr1.input();
	arr2.input();
	arr1.show();
	cout<<endl;
	arr2.show();
	cout<<endl;
	//cout<<(arr1 == arr2);
	if(arr1 == arr2){ // returns true = 1
		cout<<"Both arrays are same"<<endl;
	} else{
		cout<<"Arrays are unequal"<<endl;
	}
}