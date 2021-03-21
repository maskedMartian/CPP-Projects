
#include <string>
#include <iostream>
#include <fstream>

using namespace std;


// Class definitions
class User 
{
    private:
        string username,
               password;

    public:
        string getName();
        void setName(string name);
        string getPassword();
        void setPassword(string passwrd);
};


class FileManager
{
    private:
        string filename;

    public:
        void setFilename(string username);
        void saveToFile(string password);
        string readFromFile();
        bool fileExists();
};


class UserInterface
{
    private:

    public:
        int inputMenuChoice();
        string getUsername();
        string getPassword();
        bool verifyPassword(string password1);
};


class BusinessManager
{
    private:
        int menuSelection;
        User user;
        FileManager fileManager;
        UserInterface userInterface;

    public:
        void setMenuSelection();
        int getMenuSelection();
        void registerUser();
        void loginUser();
};


// Class method definitions
string User::getName()
{
    return username; 
}

void User::setName(string name)
{
    username = name;
}
        
string User::getPassword()
{
    return password;
}
        
void User::setPassword(string passwrd)
{
    password = passwrd;
}

void FileManager::setFilename(string username)
{
    filename = username + ".txt";
}

void FileManager::saveToFile(string password)
{
    ofstream saveFile(filename);

    saveFile << password;
    saveFile.close();
}

string FileManager::readFromFile()
{
    string password;

    ifstream readFile(filename);
    getline(readFile, password);
    readFile.close(); 
    return password;
}

bool FileManager::fileExists()
{
    ifstream file(filename);

    if(!file)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int UserInterface::inputMenuChoice()
{
    int choice = 0;
            
    cout << "\nMain menu\n";
    cout << "  [1] - Register\n";
    cout << "  [2] - Login\n";
    cout << "  [3] - Exit\n\n";
    cout << "Please make a selection: ";
    cin >> choice;
    return choice; 
}

string UserInterface::getUsername()
{
    string username;

    cout << "\nPlease enter your username: ";
    cin >> username;
    return username;
}

string UserInterface::getPassword()
{
    string password;

    cout << "Please enter your password: ";
    cin >> password;
    return password;
}

bool UserInterface::verifyPassword(string password1)
{
    string password2;

    cout << "Please re-enter your password: ";
    cin >> password2;
    return password1 == password2;
}

void BusinessManager::setMenuSelection()
{
    menuSelection = userInterface.inputMenuChoice();
}
        
int BusinessManager::getMenuSelection()
{
    return menuSelection;
}
        
void BusinessManager::registerUser()
{
    user.setName(userInterface.getUsername());
    fileManager.setFilename(user.getName());
    if (!fileManager.fileExists())
    {
        user.setPassword(userInterface.getPassword());
        while (!userInterface.verifyPassword(user.getPassword()))
        {
            cout << "\nERROR: Passwords did not match. Try again.\n\n";
            user.setPassword(userInterface.getPassword());  
        }
        fileManager.setFilename(user.getName());
        fileManager.saveToFile(user.getPassword());
        cout << "\nUser registered\n";
    }
    else
    {
        cout << "\nERROR: User already registered.\n";
    }
}
        
void BusinessManager::loginUser()
{
    user.setName(userInterface.getUsername());
    fileManager.setFilename(user.getName());
    if (!fileManager.fileExists())
    {
        cout << "\nERROR: User not registered\n";
    }
    else
    {
        user.setPassword(userInterface.getPassword());
        if (fileManager.readFromFile() != user.getPassword())
        {
            cout << "\nERROR: Incorrect Password\n";
        }
        else
        {
            cout << "\nYou are logged in\n";
        }   
    }
}