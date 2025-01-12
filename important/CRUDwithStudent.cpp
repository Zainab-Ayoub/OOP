#include<iostream>
using namespace std;

class Student{
    private:
        int rollNo, marks, r;
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
        }
        void readInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll Number: "<<rollNo<<endl;
            cout<<"Marks: "<<marks<<endl;    
        }
        void updateInfo(){
            cout<<"Enter name: ";
            getline(cin,name);
            cout<<"Enter marks: ";
            cin>>marks;
        }
        void deleteInfo(){
            name="";
            rollNo=0;
            marks=0;
            --totalStudents;
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
        bool operator> (const Student &x){
            return marks > x.marks;
        }
        bool operator== (const Student &x){
            return marks == x.marks;
        }
        ~Student(){
            cout<<"Objects have been destroyed."<<endl;
        }
    friend void displayByFriendFunction(Student*);
};

void displayByFriendFunction(Student* studentArray){
    cout<<"Name: "<<studentArray->name<<endl;
    cout<<"Roll Number: "<<studentArray->rollNo<<endl;
    cout<<"Marks: "<<studentArray->marks<<endl;
}

int Student :: totalStudents = 0;

int main(){
    int x, r, num, i;
    cout<<"Enter number of students: ";
    cin>>num;
    
    Student *studentArray = new Student[num];

    do {
        cout<<"Press 1 to enter student info.\n"
        <<"Press 2 to read information of a student.\n"
        <<"Press 3 to update information of a student.\n"
        <<"Press 4 to delete information of a student.\n"
        <<"Press 5 to compare marks of students.\n"
        <<"Press 6 to check total number of students.\n"
        <<"Press 6 to exit.\n";

    switch(x){
            case1:
                temp:
                cout<<"Enter a roll number to update info: "; 
                cin>>r;
                for(i=1; i<=num; i++){
                    if (i==r){
                        studentArray[i].createInfo();
                    } else{
                        cout<<"Invalid entry, please try again."<<endl;
                        goto temp;
                    }
                }

            case2:
                temp:
                cout<<"Enter a roll number to display info: "; 
                cin>>r;
                for(i=1; i<=num; i++){
                    if (i==r){
                        studentArray[i].readInfo();
                    } else{
                        cout<<"Invalid entry, please try again."<<endl;
                        goto temp;
                    }
                }

            case3:
                temp:
                cout<<"Enter a roll number to update info: "; 
                cin>>r;
                for(i=1; i<=num; i++){
                    if (i==r){
                        studentArray[i].updateInfo();
                    } else{
                        cout<<"Invalid entry, please try again."<<endl;
                        goto temp;
                    }
                }

            case4:
                temp:
                cout<<"Enter a roll number to delete info: "; 
                cin>>r;
                for(i=0; i<num; i++){
                    if (i==r){
                        studentArray[i].deleteInfo();
                    } else{
                        cout<<"Invalid entry, please try again."<<endl;
                        goto temp;
                    }
                }

            case5:
                for(i=num; i>0; i--){
                    cout<<studentArray[i].operator>();
                }
            
            case6:
                cout<<"Program exited successfully!"<<endl;
        }
    } while(x != num+1);   
    
    delete [] studentArray;
}