#include <iostream>
#include <fstream>
#include <string>

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


int main()
{
    User user;

    user.setName("George");
    cout << "Name:     " << user.getName() << "\n";
    user.setPassword("kajfh6dd");
    cout << "Password: " << user.getPassword() << "\n";


	return 0;
}

