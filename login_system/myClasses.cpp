
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
        FileManager(string username);
        void saveToFile(string username, string password);
        string readFromFile(string username);
        bool fileExists();
};


class UserInterface
{
    private:

    public:
        int getMenuChoice();
        string getUsername();
        string getPassword();
        bool verifyPassword(string password1);
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

FileManager::FileManager(string username)
{
    filename = username + ".txt";
}

void FileManager::saveToFile(string username, string password)
{
    ofstream saveFile(filename);

    saveFile << password;
    saveFile.close();
}

string FileManager::readFromFile(string username)
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

int UserInterface::getMenuChoice()
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

    cout << "Please enter your username: ";
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