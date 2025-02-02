// Implement a User class to model a user profile 
// with attributes like name, email, and password. 
// Add a method to update the password.

#include<iostream>
using namespace std;

class User{
    private:
        string username;
        string password;
        
    public:
        User(string uname, string pass) {
            username = uname;
            password = pass;
        }
        
        void login() {
            string enteredUsername, enteredPassword;
            int attempts=3;

            while (attempts > 0){
                cout<<"Enter your username: ";
                cin>>enteredUsername;

                if (enteredUsername == username) {
                    cout << "Enter your password: ";
                    cin >> enteredPassword;

                    if(enteredPassword == password){
                        cout<<"Login Successful!"<<endl;
                        return; 
                    } else{
                        attempts--;
                        cout<<"Incorrect password. Attempts remaining: "<<attempts<<endl;
                    }
                } else {
                    cout<<"Username not found. Please try again."<<endl;
                }
            }

            cout<<"Too many failed attempts. Would you like to reset your password? (Y/N): ";
            
            char choice;
            cin>>choice;

            if(choice == 'Y' || choice == 'y'){
                resetPassword();
            } else{
                cout<<"Login failed. Please try again later."<<endl;
            }
        }

        void resetPassword(){
            string newPassword, confirmPassword;
            cout<<"Enter a new password: ";
            cin>>newPassword;
            cout<<"Confirm your new password: ";
            cin>>confirmPassword;

            if(newPassword == confirmPassword){
                password = newPassword;
                cout<<"Password has been successfully reset."<<endl;
            }else{
                cout<<"Passwords do not match. Password reset failed."<<endl;
            }
        }

        void displayProfile(){
            cout<<"Username: "<<username<<endl;
        }
};

int main() {
    User user("BSCS", "12345");  
    user.login(); 
    return 0;
}
