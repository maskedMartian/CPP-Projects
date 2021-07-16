#include <iostream>

int main()
{
	enum Direction { UP, DOWN, LEFT, RIGHT };
	Direction oneDirection = DOWN;

	enum class Stuff { NORTH, SOUTH, EAST, WEST };

	Stuff mapDirection = Stuff::NORTH;

	std::cout << oneDirection << std::endl;
	std::cout << mapDirection << std::endl;

	std::cin.clear();
	getchar();

	return 0;
}