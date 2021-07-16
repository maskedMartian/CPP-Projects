#include <iostream>

#include "Dictionary.h"

void Dictionary::addDefinition(std::string word, std::string definition)
{
	this->dictionary[word] = definition;
}

std::string Dictionary::getDefinition(std::string word) const
{
	std::string definition = "NOT FOUND!";
	auto entry = this->dictionary.find(word);

	if (entry != this->dictionary.end()) {
		definition = entry->second;
	}
	return definition;
}

void Dictionary::printAll() const
{
	if (this->dictionary.size()) {
	    for (auto entry : this->dictionary) {
			std::cout << entry.first << "\t" << entry.second << "\n";
		}
		std::cout << "\n";
	}
}