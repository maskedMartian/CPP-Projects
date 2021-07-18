#include <iostream>

#include "Alien.h"

int main()
{
	Alien alien(20, 20, 'm');

	std::cout << alien.getWeight();

	return 0;
}