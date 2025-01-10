#include<iostream>
using namespace std;

class Student{
    private:
        string studentName, className;
        int rollNumber, marks[3], totalMarks=0;
        char grade[3], overallGrade;
    public:
        Student() {
            studentName = "unknown";
            className = "unknown";
            rollNumber = 0;
            totalMarks = 0;
            overallGrade = 'F';
            for(int i=0; i<3; i++){
                marks[i] = 0;
                grade[i] = 'F';
            }
        }
        void get(){
            cout<<"Enter name: ";
            //cin.ignore();
            getline(cin,studentName); 
            cout<<"Enter class: ";
            getline(cin,className);
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
            else if (totalMarks>10 && totalMarks<=20)
                overallGrade='C';
            else
                overallGrade='F';
        }      
        void display() {
            cout << "Name: " << studentName << endl;
            cout << "Class: " << className << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Marks & Grades:" << endl;
            for (int i = 0; i < 3; i++) {
                cout << "Subject " << i + 1 << ": Marks = " << marks[i] << ", Grade = " << grade[i] << endl;
            }
            cout << "Overall Grade: " << overallGrade << endl;
        }
        int getTotalMarks(){
            return totalMarks;
        }
        string getName(){
            return studentName;
        }
};

int main(){
    int m[3]={13, 11, 7};
    Student obj1, obj2;

    obj1.get();
    obj1.calculation();
    obj1.display();
    cout<<endl;
    obj2.set("Noor", "BSCS", 3, m);
    obj2.calculation();
    obj2.display();
    cout<<endl;
    if(obj1.getTotalMarks() > obj2.getTotalMarks()){
        cout<<obj1.getName()<<" has higher marks than "<<obj2.getName()<<endl;
    } else if(obj1.getTotalMarks() < obj2.getTotalMarks()){
        cout<<obj2.getName()<<" has higher marks than "<<obj1.getName()<<endl;
    } else{
        cout<<"Both "<<obj1.getName()<<" & "<<obj2.getName()<<" have equal marks."<<endl;
    }
}