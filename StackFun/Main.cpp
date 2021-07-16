#include <iostream>
#include <stack>
#include <string>
#include <ios>

void storeReverse(std::string origString, std::stack<char>& reverseStack);
bool isPalindrone(std::string origString);
void printResult(std::string origString);

int main()
{
	std::string strArray[5]{"racecar", "fudge", "civic", "bob", "dogs"};

	for (std::string str : strArray) {
		printResult(str);
		std::cout << "\n";
	}
	getchar();
	getchar();
	return 0;
}

std::stack<char> storeReverse(std::string origString)
{
	std::stack<char> reverseStack;

	for (char c : origString) {
		reverseStack.push(c);
	}
	return reverseStack;
}

bool isPalindrone(std::string origString)
{
	std::stack<char> reverseStack = storeReverse(origString);
	bool result = true;

	if (origString.length() == reverseStack.size()) {
		for (char c : origString) {
			char currChar = reverseStack.top();
			reverseStack.pop();
			if (currChar != c) result = false;
		}
	} else {
		result = false;
	}
	return result;
}

void printResult(std::string origString)
{
	std::cout << "Is " << origString << " a palidrone?\t" << std::boolalpha 
		      << isPalindrone(origString);
}


