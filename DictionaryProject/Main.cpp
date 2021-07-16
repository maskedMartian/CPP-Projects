#include <iostream>
#include <string>

#include "Dictionary.h"

int menu();
std::string inputWord(std::string prompt);
std::string inputDefinition(std::string word);

int main()
{
	Dictionary dict;
	std::string word, definition;
	int choice;

	do {
		choice = menu();
		switch (choice) {
		case 1:
			word = inputWord("Enter the word\n");
			definition = inputDefinition(word);
			dict.addDefinition(word, definition);
			std::cout << "\n";
			break;
		case 2:
			word = inputWord("For which word do you want the defintion?\n");
			std::cout << dict.getDefinition(word) << "\n\n";
			break;
		case 3:
			dict.printAll();
		}
	} while (choice);
	
	getchar();
	return 0;
}

int menu()
{
	int choice;

	std::cout << "Type your selection\n" 
		      << "1 - Add a new word and definition\n"
		      << "2 - Get the definition for a word\n" 
		      << "3 - Print all definitions\n"
		      << "0 - Exit the program\n\n";
	std::cin >> choice;
	return choice;
}

std::string inputWord(std::string prompt)
{
	std::string word;

	std::cout << prompt;
	std::cin >> word;
	return word;
}

std::string inputDefinition(std::string word)
{
	std::string definition;

	std::cout << "Enter the definition for " << word << "\n";
	std::cin.get();
	getline(std::cin, definition);
	return definition;
}