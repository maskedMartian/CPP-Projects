#include <iostream>
#include <fstream>
#include <string>
#include "myClasses.cpp"

using namespace std;


int main()
{
    User user;

    user.setName("George");
    cout << "Name:     " << user.getName() << "\n";
    user.setPassword("kajfh6dd");
    cout << "Password: " << user.getPassword() << "\n";


	return 0;
}

