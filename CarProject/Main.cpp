#include <iostream>
#include <memory>

#include "Car.h"

int main()
{
	auto car = std::make_unique<Car>("red", 4);

	std::cout << "Your car is a " << car->getColor() << " " << car->getNumDoors() << " door.\n";

	getchar();
	return 0;
}