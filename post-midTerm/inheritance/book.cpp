#include<iostream>
using namespace std;

class book{
    protected:
        string bookID, name;
        float price;
    public:
        void getInfo(){
            cin.ignore();
            cout<<"Enter book id: ";
            getline(cin,bookID);
            cin.ignore();
            cout<<"Enter book name: ";
            getline(cin,name);
            cout<<"Enter book price: ";
            cin>>price;
        } void showInfo(){
            cout<<"Book ID: "<<bookID<<endl;
            cout<<"Book Name: "<<name<<endl;
            cout<<"Book Price: "<<price<<endl;
        }
};

class writer{
    protected:
        string writer_name, address;
        int numOfBooks;
        book obj[5];
    public:
        void getInfo(){
            cout<<"Enter writer's name: ";
            getline(cin,writer_name);
            cin.ignore();
            cout<<"Enter writer's address: ";
            getline(cin,address);
            cout<<"Enter total number of books written by him/her: ";
            cin>>numOfBooks;
            for(int i=0; i<numOfBooks; i++){
                cout<<"Enter details of book"<<i+1<<": "<<endl;
                obj[i].getInfo();
            }
        } void showInfo(){
            cout<<"Writer's Name: "<<writer_name<<endl;
            cout<<"Writer's Address: "<<address<<endl;
            cout<<"Total Books Written by him: "<<numOfBooks<<endl;
            obj->showInfo();
            for(int i=0; i<numOfBooks; i++){
                cout<<"Details of book "<<i+1<<": "<<endl;
                obj[i].showInfo();
            }
        }
};

int main(){
    writer obj;
    obj.getInfo();
    obj.showInfo();
}