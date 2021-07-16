#include <iostream>
#include <queue>
#include <string>

int main()
{
	std::queue<std::string> peopleQueue;

	peopleQueue.push("John");
	peopleQueue.push("Sally");
	peopleQueue.push("Bob");
	peopleQueue.push("Sam");
	peopleQueue.push("Ali");
	peopleQueue.push("Karen");

	while (!peopleQueue.empty()) {
		std::cout << peopleQueue.front() << "\n";
		peopleQueue.pop();
	}

	getchar();
	getchar();
	return 0;
}