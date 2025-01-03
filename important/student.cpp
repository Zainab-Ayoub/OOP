#include<iostream>
using namespace std;

class Student{
    private:
        string studentName, className;
        int rollNumber, marks[3], totalMarks=0;
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
            for(int i=0; i<3; i++){
                totalMarks += marks[i];
            }
            if (totalMarks>30 && totalMarks<=45)
                overallGrade='A';
            else if (totalMarks>20 && totalMarks<=30)
                overallGrade='B';
            else if (totalMarks>10 && totalMarks<=30)
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
        char getTotalMarks(){
            return totalMarks;
        }
        string getName(){
            return studentName;
        }
};

int main(){
    int m[3]={13, 11, 7};
    Student first, second, third;
    first.calculation();
    first.display();
    cout<<endl;
    second.get();
    second.calculation();
    second.display();
    cout<<endl;
    third.set("Noor", "BSCS", 3, m);
    third.calculation();
    third.display();
    cout<<endl;
    if(second.getTotalMarks() > third.getTotalMarks()){
        cout<<second.getName()<<" has higher marks than "<<third.getName()<<endl;
    } else if(second.getTotalMarks() < third.getTotalMarks()){
        cout<<third.getName()<<" has higher marks than "<<second.getName()<<endl;
    } else{
        cout<<"Both "<<second.getName()<<" & "<<third.getName()<<" have equal marks."<<endl;
    }
}