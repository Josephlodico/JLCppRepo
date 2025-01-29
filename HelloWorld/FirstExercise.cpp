#include <iostream>
#include <string>
#include <cstdlib> // this is required for the system
using namespace std;  //this makes sure that you don't have to write std all the time


class UserAccount  //class Declaration
{
private:
    //variables
    int ID;
    string userName;
    string password;

public:
    //this is the contructor for the userAccount
    UserAccount(int id, const string& username, const string& pwd)
        : ID(id), userName(username), password(pwd) {}

    // The Login method   / Functions:
    bool Login(const string& enteredUserName, const string& enteredPassword)
        const
    {
        return (enteredUserName == userName && enteredPassword == password);
    }
    
    //this is the Getter for ID
    int getID() const {
        return ID;
    }

};

int main2()
{
    cout << "Welcome, This is the First c++ Exersice\n\n";
    //Input for account creation
    int id;
    string username, password;

    
    cout << "Create your Account\n";
    cout << "Enter Account ID:";
    cin >> id;
    cin.ignore(); //this clears a newline character from the input buffer
   

    //makes you enter your Username
    cout << "Enter Username: ";
    getline(cin, username);

    //makes you enter your prefered password
    cout << "Enter Password:";
    getline(cin, password);

    //Create UserAccount object
    UserAccount user(id, username, password);

    //Login prompt
    cout << "\nLogin:\n";

    while (true) 
    {
        string enteredUsername, enteredPassword;

        cout << "Enter Username:";
        getline(cin, enteredUsername);

        cout << "Enter Password:";
        getline(cin, enteredPassword);

        if (user.Login(enteredUsername, enteredPassword))
        {
            cout << "Your Login was successful!!\n";
            cout << "Account ID:" << user.getID() << "\n";
            break;
        }
        else
        {
            cout << "Invalid username or password. try again.\n";

        }
    }
    //system("cls"); //clears the console
    return 0;


}
