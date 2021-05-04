#include <iostream>

class Class1
{
public:
	Class1()
	{
		std::cout << "2 - Class1 construction...\n";
	}

	~Class1()
	{
		std::cout << "6 - Class1 destruction!\n";
	}
};

class Class2 : public Class1
{
public:
	Class2()
	{
		std::cout << "3 - Class2 construction...\n";
	}

	~Class2()
	{
		std::cout << "5 - Class2 destruction!\n";
	}
};

int main()
{
	std::cout << "1 - Start...\n";

	Class2 C2;

	std::cout << "4 - End!\n";

	return 0;
}