#include<iostream>
using namespace std;

class Student{
    private:
        int rollNo, marks, t, r;
        string name;
        static int totalStudents;
    public:
        Student(){
            name="unknown";
            rollNo=0;
            marks=0;
        }
        void createInfo(){
            cout<<"Enter name: ";
            getline(cin,name);
            cout<<"Enter roll number: ";
            cin>>rollNo;
            cout<<"Enter marks: ";
            cin>>marks;
            ++totalStudents;
            t=totalStudents;
        }
        int readInfo(int r){
            cout<<"Enter a roll number: ";
            cin>>r;
            if (r == rollNo){
                cout<<"Name: "<<name<<endl;
                cout<<"Roll Number: "<<rollNo<<endl;
                cout<<"Marks: "<<marks<<endl;
            } else{
                cout<<"Wrong information, please try again!"<<endl;
            }
        }
        void updateInfo(){
            cout<<"Update your name and marks"<<endl;
            cout<<"Enter name: ";
            getline(cin,name);
            cout<<"Enter marks: ";
            cin>>marks;
        }
        void deleteInfo(){
            name="";
            rollNo=0;
            marks=0;
            cout<<"Your information has been deleted."<<endl;
        }
        string getName(){
            return name;
        }
        static int getTotalStudents(){
            return totalStudents;
        }
        int getMarks(){
            return marks;
        }
        ~Student(){
            cout<<"Objects have been destroyed."<<endl;
        }
};

int Student :: totalStudents = 0;

int main(){

}