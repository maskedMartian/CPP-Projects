#include "Car.h"

Car::Car(std::string color, int numDoors)
{
	this->color = color;
	this->numDoors = numDoors;
}

std::string Car::getColor()
{
	return this->color;
}

int Car::getNumDoors()
{
	return this->numDoors;
}
