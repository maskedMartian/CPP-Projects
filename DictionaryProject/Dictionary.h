#pragma once

#include <string>
#include <map>

class Dictionary
{
public:
	void addDefinition(std::string word, std::string definition);
	std::string getDefinition(std::string word) const;
	void printAll() const;

private:
	std::map<std::string, std::string> dictionary;
};