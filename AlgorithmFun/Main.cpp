#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

void fillVector(std::vector<int>& myVector);
void printVector(const std::vector<int>& myVector);
void countFives(const std::vector<int>& myVector);

int main()
{
	std::vector<int> myVector;

	fillVector(myVector);
	printVector(myVector);

	countFives(myVector);

	std::cout << "Replacing 5s with 99s\n";
	replace(myVector.begin(), myVector.end(), 5, 99);
	
	countFives(myVector);
	printVector(myVector);

	std::cout << "Sorting the vector\n";
	sort(myVector.begin(), myVector.end());

	printVector(myVector);

	getchar();
	return 0;
}

void fillVector(std::vector<int>& myVector)
{
	// seed
	srand(time(nullptr));
	int temp;

	for (int i = 0; i < 20; i++)
	{
		temp = rand() % 5 + 1; 
		myVector.push_back(temp);
	}
}

void printVector(const std::vector<int>& myVector)
{
	for (int element : myVector)
	{
		std::cout << element << "\n";
	}
}

void countFives(const std::vector<int>& myVector)
{
	int numFives = count(myVector.begin(), myVector.end(), 5);
	std::cout << "number of fives: " << numFives << "\n";
}

