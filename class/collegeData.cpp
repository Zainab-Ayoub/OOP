#include<iostream>
using namespace std;

class College{
    private:
        string college_id, college_name; 
        int no_of_classes=5;
        int strength[5];

    public:
        void get(){
            cout<<"Enter college ID: ";
            cin>>college_id;
            cout<<"Enter college name: ";
            cin>>college_name;
            cout<<"Enter strength of each class: "<<endl;
            for(int i=0; i<5; i++){
                cin>>strength[i];
            }
        }
        void show(){
            cout<<"College ID: "<<college_id;
            cout<<"College Name: "<<college_name;
            cout<<"Strength of each class: "<<endl;
            for(int i=0; i<5; i++){
                cout<<strength[i]<<"\t";
            }
            cout<<endl;
        }
        int sum(){
            int sum=0;
            for(int i=0; i<5; i++){
                sum += strength[i];
            }
            return sum;
        }
        void set(string a, string b, int arr[], int size){
            college_id=a;
            college_name=b;
            cout<<"Already set values are: "<<endl;
            for (int i=0; i<size; i++){
                cout<<"Class "<<i+1<<": "<<arr[i]<<"\t";
            }
            cout<<endl;
            bool same=true;
            for(int i=0; i<size; i++){
                if(strength[i] != arr[i]){
                    same=false;
                    break;
                } 
            }
            if(same){
                cout<<"Strength is OK!"<<endl;
            } else{
                cout<<"Strength is not OK!"<<endl;
            }
        }
        void rem_capacity(){
            int remaining, total_capacity;
            cout<<"Enter total capacity: ";
            cin>>total_capacity;
            remaining = total_capacity - sum();
            cout<<"Remaining Capacity: "<<remaining<<endl;
        }
        void min_str(){
            int i, min=strength[0], min_index=0;
            for(i=1; i<5; i++){
                if(min >= strength[i]){
                    min=strength[i];
                    min_index=i;
                }
            }
            cout<<"Class "<<min_index+1<<" has a minimum strength of "<<min<<" students"<<endl;
        }
        void max_str(){
            int i, max=0, max_index=0;
            for(i=1; i<5; i++){
                if(max <= strength[i]){
                    max=strength[i];
                    max_index=i; 
                }
            }
            cout<<"Class "<<max_index+1<<" has a maximum strength of "<<max<<" students"<<endl;
        }
};

int main(){
    int arr[5] = {45, 50, 40, 55, 60};
    College obj;
    obj.get();
    obj.show();
    cout<<"Sum of strengths of all classes: "<<obj.sum()<<endl;
    obj.set("1234567", "PGC", arr, 5);
    obj.rem_capacity();
    obj.min_str();
    obj.max_str();
}