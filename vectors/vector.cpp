#include <iostream>
#include <vector>


int main()
{
	std::vector<char> vowels = new std::vector<char>('a', 'e', 'i', 'o', 'u');

	std::cout << vowels[0] << "\n";

	return 0;
}

