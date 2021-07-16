#include <iostream>
#include <string>

#include "Swapper.h"

template<class T>
T getBigger(T a, T b);

int main()
{
	std::string str1 = "Mary",
		        str2 = "Mark";
	double biggerDub = getBigger(3.14, 5.5);
	int biggerInt = getBigger(11, 9);
	std::string biggerStr = getBigger(str1, str2);
	Swapper<int> intSwapper(5, 10);
	Swapper<std::string> stringSwapper("Jon", "Bob");

	std::cout << "Bigger items:\n" << "\t" << biggerDub << "\n\t" << biggerInt
		<< "\n\t" << biggerStr << "\n\n\n";
	std::cout << "Testing the swapper:\n";
	std::cout << "\t" << intSwapper.getFirst() << "\t" << intSwapper.getSecond() << "\n";
	std::cout << "\t" << stringSwapper.getFirst() << "\t" << stringSwapper.getSecond() << "\n";
	intSwapper.swap();
	stringSwapper.swap();
	std::cout << "Swapped!\n";
	std::cout << "\t" << intSwapper.getFirst() << "\t" << intSwapper.getSecond() << "\n";
	std::cout << "\t" << stringSwapper.getFirst() << "\t" << stringSwapper.getSecond() << "\n";

	getchar();
}

template<class T>
T getBigger(T a, T b)
{
	if (a > b) return a;
	return b;
}