
#include <string>
#include <iostream>

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