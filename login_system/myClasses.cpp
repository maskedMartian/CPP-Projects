
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