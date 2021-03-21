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

	User user;
	FileManager fileManager;
	UserInterface userInterface;

    menuChoice = userInterface.getMenuChoice();

    while (menuChoice != EXIT)
    {
    	if (menuChoice == REGISTER)
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
                cout << "\nSUCCESS: User registered\n";
            }
            else
            {
                cout << "\nERROR: User already registered.\n";
            }
    	}
    	else if (menuChoice == LOGIN)
    	{
            user.setName(userInterface.getUsername());
            fileManager.setFilename(user.getName());
            if (!fileManager.fileExists())
            {
                cout << "\nERROR: Username not registered\n";
            }
            else
            {
                user.setPassword(userInterface.getPassword());
                if (fileManager.readFromFile() != user.getPassword())
            	{
                    cout << "\nERROR: Incorrect Password\n\n";
            	}
            	else
            	{
            	    cout << "\nSUCCESS: You are logged in\n";
            	}	
            }
    	}
        menuChoice = userInterface.getMenuChoice();
    }
	return 0;
}

