// Design a BankLocker class where only the authorized user can open the locker. 
// Use encapsulation to secure the lock combination.

#include<iostream>
using namespace std;

class bankLocker {
    private:
        int lockCombination;  
        string userName;
        string userPassword;
        bool isOpen;

    public:
        bankLocker(string name, string password, int combination) {
            lockCombination = combination;
            userName = name;
            userPassword = password;
            isOpen = false; 
        }

        int authenticate(string name, string password, int combination) {
            if (name == userName && password == userPassword && combination == lockCombination) {
                openLocker();
            } else{
                cout<<"Incorrect Information"<<endl;
                closeLocker();
            }
        }

        void openLocker(){
            cout<<"Locker is now open!"<<endl;  
        }

        void closeLocker() {
            cout<<"Locker is now closed."<<endl;
        }
};

int main(){
    bankLocker obj("xyz", "abc123", 1234);

    string username, password;
    int combination, choice;

    while (true){
        cout<<"Press 1 to open the locker\n";
        cout<<"Press 2 to close the locker\n";
        cout<<"Press 3 to exit the program\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter username: ";
                cin>>username;
                cout<<"Enter password: ";
                cin>>password;
                cout<<"Enter lock combination: ";
                cin>>combination;
                obj.authenticate(username, password, combination);  
                break;

            case 2:
                obj.closeLocker();  
                break;

            case 3:
                cout<<"Program Exited!"<<endl;
                return 0;

            default:
                cout<<"Invalid choice! Please try again."<<endl;
        }
    }
}
