#include <iostream>
#include <fstream>
#include <string>
#include "myClasses.cpp"

using namespace std;

const int REGISTER = 1;
const int LOGIN = 2;
const int EXIT = 3;

int main()
{
    int menuChoice;
    string password,
           password1;

	User user;
	FileManager fileManager;
	UserInterface userInterface;

    menuChoice = userInterface.getMenuChoice();

    while (menuChoice != EXIT)
    {
    	if (menuChoice == REGISTER)
    	{
            user.setName(userInterface.getUsername());
            user.setPassword(userInterface.getPassword());
            while (!userInterface.verifyPassword(user.getPassword()))
            {
                user.setPassword(userInterface.getPassword());	
            }
            fileManager.setFilename(user.getName());
            fileManager.saveToFile(user.getPassword());
            cout << "\nUser registered\n";
    	}
    	else if (menuChoice == LOGIN)
    	{
            user.setName(userInterface.getUsername());
            user.setPassword(userInterface.getPassword());
            fileManager.setFilename(user.getName());
            if (fileManager.fileExists())
            {
            	if (fileManager.readFromFile() == user.getPassword())
            	{
                    cout << "\nYou are logged in\n";
            	}
            	else
            	{
            		cout << "\nIncorrect Password\n";
            	}
            }
            else
            {
            	cout << "\nUsername not registered\n";
            }
    	}

        menuChoice = userInterface.getMenuChoice();
    }




    // User user;

    // user.setName("George");
    // cout << "Name:     " << user.getName() << "\n";
    // user.setPassword("kajfh6dd");
    // cout << "Password: " << user.getPassword() << "\n";

    // FileManager fileManager(user.getName());

    // if (!fileManager.fileExists())
    // {
    // 	fileManager.saveToFile(user.getName(), user.getPassword());
    // }
    // if (fileManager.fileExists())
    // {
    // 	cout << "The password is: " << fileManager.readFromFile(user.getName()) << "\n";
    // }

    // UserInterface userInterface;
    // string pw;

    // cout << userInterface.getMenuChoice() << "\n";
    // cout << userInterface.getUsername() << "\n";
    // pw = userInterface.getPassword();
    // cout << pw << "\n";
    // cout << userInterface.verifyPassword(pw) << "\n";

	return 0;
}

