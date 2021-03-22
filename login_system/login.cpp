#include <iostream>
#include <fstream>
#include <string>
#include "myClasses.cpp"

using namespace std;

const int REGISTRATION = 1;
const int AUTHENTICATION = 2;
const int EXIT = 3;

int main()
{
    BusinessManager businessManager;

    businessManager.setMenuSelection();
    while (businessManager.getMenuSelection() != EXIT)
    {
        if (businessManager.getMenuSelection() == REGISTRATION)
        {
            businessManager.registerUser();
        }
        else if (businessManager.getMenuSelection() == AUTHENTICATION)
        {
        	businessManager.authentication();
        	// if (businessManager.userLoggedIn())
        	// {
         //        businessManager.logoutUser();
        	// }
        	// else
        	// {
         //        businessManager.loginUser();
         //    }
        }
        businessManager.setMenuSelection();
    }

	return 0;
}

