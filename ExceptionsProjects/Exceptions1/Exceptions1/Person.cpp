#include "Person.h"
#include <stdexcept>
#include <string>
using namespace std;

Person::Person(string name)
{
	setName(name);
}

string Person::getName() const noexcept
{
	return name;
}

void Person::setName(string name)
{
	if (name != "Bob")
	{
		this->name = name;
	}
	else
	{
		throw runtime_error("Error: No Bobs allowed!"); // pass string into the constructor of the runtime_error object  
	}
}
