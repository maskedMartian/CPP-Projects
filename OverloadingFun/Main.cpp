#include <iostream>

#include "Square.h"

int main()
{
	Square s1(10);
	Square s2(20);
	Square s3;

	std::cout << "Square 1 area: " << s1.area() << "\n";
	std::cout << "Square 2 area: " << s2.area() << "\n";

	if (s1 != s2)
	{
		std::cout << "They are not equal!\n";
	}
	else
	{
		std::cout << "They are equal!\n";
	}

	s3 = s1 + s2;
	std::cout << "Square 3 area: " << s3.area() << "\n";
	
	getchar();
	return 0;
}