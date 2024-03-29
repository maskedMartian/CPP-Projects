
#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>

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
        void deleteFile();
};


class UserInterface
{
    private:

    public:
        int inputMenuChoice(bool loggedIn);
        string getUsername();
        string getPassword();
        bool verifyPassword(string password1);
};


class BusinessManager
{
    private:
        int menuSelection;
        bool loggedIn = false;
        User user;
        FileManager fileManager;
        UserInterface userInterface;

    public:
        void setMenuSelection();
        int getMenuSelection();
        void registerUser();
        void unregisterUser();
        void registration();
        void loginUser();
        void logoutUser();
        void authentication();
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

void FileManager::deleteFile()
{
    remove(filename.c_str());
}

int UserInterface::inputMenuChoice(bool loggedIn)
{
    int choice;
     
    cout << "\nMain menu\n";
    if (loggedIn)
    {
        cout << " [1] - Unregister\n"
             << " [2] - Logout\n"
             << " [3] - Exit\n\n";
    }
    else
    {
        cout << "  [1] - Register\n"
             << "  [2] - Login\n"
             << "  [3] - Exit\n\n";
    }
    cout << "Please make a selection: ";
    cin >> choice;
    while (!cin.good() || choice < 1 || choice > 3)
    {
       cout << "\nERROR: That is not a valid menu choice.\n"
            << "Please make a valid selection: ";
       cin.clear();
       cin.ignore(1024, '\n');
       cin >> choice;
    }
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
    menuSelection = userInterface.inputMenuChoice(loggedIn);
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

void BusinessManager::unregisterUser()
{
    fileManager.deleteFile();
    loggedIn = false;
    cout << "\nUser is unregistered\n";
}

void BusinessManager::registration()
{
    if (loggedIn)
    {
        unregisterUser();
    }
    else
    {
        registerUser();
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
            loggedIn = true;
        }   
    }
}

void BusinessManager::logoutUser()
{
    loggedIn = false;
    cout << "\nYou are logged out\n";
}

void BusinessManager::authentication()
{
    if (loggedIn)
    {
        logoutUser();
    }
    else
    {
        loginUser();
    }
}