#include <iostream>

#include "Square.h"
#include "SquareHelper.h"

void setNewLength(Square& square, double length);
void printData(Square& square);

int main()
{
	Square square(10);
	SquareHelper helper;

    std::cout << "The square is " << square.getLength() << " by " << square.getLength()
	          << " and has a perimter of " << square.perimeter() << " and an area of "
	          << square.area() << ".\n";

	setNewLength(square, 11);
	std::cout << "The square is " << square.getLength() << " by " << square.getLength()
		<< " and has a perimter of " << square.perimeter() << " and an area of "
		<< square.area() << ".\n";

	helper.changeLength(square, 12);
	std::cout << "The square is " << square.getLength() << " by " << square.getLength()
		<< " and has a perimter of " << square.perimeter() << " and an area of "
		<< square.area() << ".\n";

	printData(square);

	getchar();
	return 0;
}

void setNewLength(Square& square, double length)
{
	square.length = length;
}

void printData(Square& square)
{
	std::cout << "The square is " << square.length << " by " << square.length << ".\n";
}