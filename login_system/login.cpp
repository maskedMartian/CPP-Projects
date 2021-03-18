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

    FileManager fileManager(user.getName());

    if (!fileManager.fileExists())
    {
    	fileManager.saveToFile(user.getName(), user.getPassword());
    }
    if (fileManager.fileExists())
    {
    	cout << "The password is: " << fileManager.readFromFile(user.getName()) << "\n";
    }

	return 0;
}

