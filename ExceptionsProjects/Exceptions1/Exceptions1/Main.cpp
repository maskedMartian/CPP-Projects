#include <iostream>
#include <stdexcept>
#include "Person.h"
#include "Dog.h""

int main()
{
	try
	{
		Dog doggy1("Dalmatian");
		Dog doggy2("Chihuahua");
		Dog doggy3("Poodle");
		Dog doggy4("Irish Setter");

		cout << doggy1.getBreed() << endl;
		cout << doggy2.getBreed() << endl;
		cout << doggy3.getBreed() << endl;
		cout << doggy4.getBreed() << endl;
	}
	catch (const runtime_error &err)
	{
		cout << err.what() << endl;

	}

	return 0;
}