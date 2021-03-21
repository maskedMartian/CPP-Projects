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
    BusinessManager businessManager;

    businessManager.setMenuSelection();
    while (businessManager.getMenuSelection() != EXIT)
    {
        if (businessManager.getMenuSelection() == REGISTER)
        {
            businessManager.registerUser();
        }
        else if (businessManager.getMenuSelection() == LOGIN)
        {
            businessManager.loginUser();
        }
        businessManager.setMenuSelection();
    }
    
	return 0;
}

