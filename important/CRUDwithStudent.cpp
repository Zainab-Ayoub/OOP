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
            cin.ignore();
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

int main() {
    int x, r, num, i;
    cout<<"Enter number of students: ";
    cin>>num;
    
    Student *studentArray = new Student[num];

    do {
        cout<<"\nPress 1 to enter student info.\n"
            <<"Press 2 to read information of a student.\n"
            <<"Press 3 to update information of a student.\n"
            <<"Press 4 to delete information of a student.\n"
            <<"Press 5 to compare marks of students.\n"
            <<"Press 6 to check total number of students.\n"
            <<"Press 7 to exit.\n"
            <<"Enter your choice: ";
        cin >> x;

        switch(x) {
            case 1:
                for(i = 0; i < num; i++){
                    cout<<"\nEnter details for student "<<i+1<< ":\n";
                    studentArray[i].createInfo();
                }
                break;

            case 2:
                cout<<"Enter a roll number to display info: "; 
                cin>>r;
                if(r >= 0 && r < num){
                    studentArray[r].readInfo();
                } else{
                    cout<<"Invalid roll number!\n";
                }
                break;

            case 3:
                cout<<"Enter a roll number to update info: "; 
                cin>>r;
                if(r >= 0 && r < num){
                    cin.ignore();
                    studentArray[r].updateInfo();
                } else{
                    cout << "Invalid roll number!\n";
                }
                break;

            case 4:
                cout<<"Enter a roll number to delete info: "; 
                cin>>r;
                if(r >= 0 && r < num){
                    studentArray[r].deleteInfo();
                } else{
                    cout << "Invalid roll number!\n";
                }
                break;

            case 5:
                cout<<"\nComparing marks of all students:\n";
                for(i = 0; i < num-1; i++){
                    for(int j = i+1; j < num; j++) {
                        cout<<"\nComparing "<<studentArray[i].getName() 
                            <<" and "<<studentArray[j].getName()<<":\n";
                        if(studentArray[i] > studentArray[j]){
                            cout<<studentArray[i].getName()<<" has higher marks: " 
                                <<studentArray[i].getMarks()<<endl;
                        }
                        else if(studentArray[i] == studentArray[j]){
                            cout<<"Both students have equal marks: " 
                                 <<studentArray[i].getMarks()<<endl;
                        } 
                        else {
                            cout<<studentArray[j].getName()<<" has higher marks: " 
                                <<studentArray[j].getMarks()<<endl;
                        }
                    }
                }
                break;

            case 6:
                cout<<"Total number of students: "<<Student::getTotalStudents()<<endl;
                break;

            case 7:
                cout<<"Program exited successfully!"<<endl;
                break;

            default:
                cout<<"Invalid choice! Please try again.\n";
        }
    } while(x != 5);   
    
    delete [] studentArray;
}