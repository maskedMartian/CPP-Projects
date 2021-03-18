
#include <string>
#include <iostream>

using namespace std;


class User 
{
    private:
        string username,
               password;

    public:
        string getName()
        {
        	return username; 
        }
        void setName(string name)
        {
            username = name;
        }
        string getPassword()
        {
        	return password;
        }
        void setPassword(string passwrd)
        {
            password = passwrd;
        }
};


