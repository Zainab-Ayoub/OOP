#include<iostream>
using namespace std;

class Student{
    private:
        string studentName, className;
        int rollNumber, marks[3];
        char grade[3], overallGrade;
    public:
        Student(){
            studentName="xyz";
            className="abc";
            rollNumber=1;
            marks[0]=10;
            marks[1]=14;
            marks[2]=9;
        }   
        void get(){
            cout<<"Enter name: ";
            cin>>studentName; 
            cout<<"Enter class: ";
            cin>>className; 
            cout<<"Enter roll number: ";
            cin>>rollNumber; 
            cout<<"Enter marks for each subject: "<<endl;
            for(int i=0; i<3; i++){
                cin>>marks[i];
            }
        }
        void set(string s, string c, int r, int m[]){
            studentName=s;    
            className=c;    
            rollNumber=r;
            for(int i=0; i<3; i++){
                marks[i]=m[i];
            }    
        }
        void calculation(){
            for(int i=0; i<3; i++){
                if (marks[i]>=13 && marks[i]<=15)
                    grade[i]='A';
                else if(marks[i]>=10 && marks[i]<=12)
                    grade[i]='B';    
                else if(marks[i]>=7 && marks[i]<=9)
                    grade[i]='C';
                else    
                    grade[i]='F';        
            }
            int points=0;
            for(int i=0; i<3; i++){
                points += marks[i];
            }
            if (points>30 && points<=45)
                overallGrade='A';
            else if (points>20 && points<=30)
                overallGrade='B';
            else if (points>10 && points<=30)
                overallGrade='C';
            else
                overallGrade='F';
        }      
        void display(){
            cout<<"Name: "<<studentName<<endl;
            cout<<"Class: "<<className<<endl;
            cout<<"Roll Number: "<<rollNumber<<endl;
            cout<<"Marks & Grade of each subject (respectively): "<<endl;
            for(int i=0; i<3; i++){
                cout<<marks[i]<<"\t"<<grade[i]<<endl;
            }
            cout<<"Overall Grade: "<<overallGrade;
        }
        char getOverallGrade(){
            return overallGrade;
        }
};

int main(){
    int m[3]={13, 11, 7};
    Student first, second, third;
    first.calculation();
    first.display();
    second.get();
    second.calculation();
    second.display();
    third.set("Noor", "BSCS", 3, m);
    third.calculation();
    third.display();
}