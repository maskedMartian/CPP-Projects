#include <iostream>
#include "Cell.h"
#include "Stack.h"

int main() {
	Cell c{ 5, nullptr };
	std::cout << "Cell value: " << c.getValue() << "\n";

	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	std::cout << "Stack size: " << s.size() << "\n"
		      << "Top value:  " << s.peek() << "\n";
	s.pop();
	std::cout << "Stack size: " << s.size() << "\n"
		      << "Top value:  " << s.peek() << "\n";
	s.push(5);
	std::cout << "Stack size: " << s.size() << "\n"
		      << "Top value:  " << s.peek() << "\n";
	s.push(6);
	std::cout << "Stack size: " << s.size() << "\n"
		      << "Top value:  " << s.peek() << "\n";

	return 0;
}