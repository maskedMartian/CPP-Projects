#include <iostream>
#include <deque>

void printDeque(std::deque<int> deck);

int main()
{
	std::deque<int> myDeck;

	myDeck.push_back(1);
	myDeck.push_back(5);
	myDeck.push_back(10);

	std::cout << "First print\n";
	printDeque(myDeck);

	myDeck.push_front(20);
	myDeck.push_front(30);

	std::cout << "Next print:\n";
	printDeque(myDeck);

	myDeck.pop_front();
	myDeck.pop_back();

	std::cout << "Last print:\n";
	printDeque(myDeck);

	getchar();
	getchar();
	return 0;
}

void printDeque(std::deque<int> deck)
{
	for (int num : deck)
	{
		std::cout << num << "\n";
	}
	std::cout << "\n";
}