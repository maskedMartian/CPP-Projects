#include <iostream>
#include "Animal.h"
#include "Dog.h"
using namespace std;

Dog::Dog(string name, double weight, string breed) : Animal(name, weight)
{
	this->breed = breed;
}
string Dog::getBreed() const
{
	return this->breed;
}
void Dog::digHole() const
{
	cout << "I'm digging a hole!" << "\n";
}
string Dog::makeNoise() const
{
	return "Bark";
}
void Dog::chaseCat() const
{
	cout << "Here kitty, kitty!" << "\n";
}
string Dog::eat() const
{
	return "I love dog food!";
}