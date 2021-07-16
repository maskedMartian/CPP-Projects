#include <iostream>
#include <string>
#include <map>

int main()
{
	std::map<std::string, std::string> contacts;

	contacts["John Baugh"]   = "313-55-5555";
	contacts["Bob Robinson"] = "734-555-5050";
	contacts["Ritchie Rich"] = "810-555-8888";

	for (std::pair<std::string, std::string> element : contacts)
	{
		std::cout << element.first << " = " << element.second << "\n";
	}

	std::cout << "\n";

	for (auto element : contacts)
	{
		std::cout << element.first << " = " << element.second << "\n";
	}

	getchar();
	return 0;
}