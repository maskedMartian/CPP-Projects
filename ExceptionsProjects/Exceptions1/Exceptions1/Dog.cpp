#include "Dog.h"
#include <stdexcept>
#include <string>
using namespace std;

Dog::Dog(string breed)
{
	if (breed != "Poodle" && breed != "poodle")
	{
		this->breed = breed;
	}
	else
	{
		throw runtime_error("Poodle? That's not a real dog!"); // pass string into the constructor of the runtime_error object 
	}
}

string Dog::getBreed() const noexcept
{
	return breed;
}
