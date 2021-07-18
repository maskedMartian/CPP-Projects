#include <iostream>
#include <vector>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"

Type getCharacterType();
Race getCharacterRace();
std::string getCharacterName();

int main()
{
	Type type;
	Race race;
	char choice;
	std::string name;
	Player* playerPtr; // = new Warrior("Brad", HUMAN);
	std::vector<Player*> playerPtrVector;

	std::cout << "Hello RPG!\n\n";

	do
	{
		type = getCharacterType();
		race = getCharacterRace();
		name = getCharacterName();

		switch (type)
		{
		case WARRIOR:
			playerPtr = new Warrior(name, race);
			break;
		case PRIEST:
			playerPtr = new Priest(name, race);
			break;
		case MAGE:
			playerPtr = new Mage(name, race);
			break;
		}
		
		playerPtrVector.push_back(playerPtr);
		std::cout << "Would you like to create another character? (y/n): ";
		std::cin >> choice;
	} 	
	while (choice == 'y' || choice == 'Y');

	for (Player* playerPtr : playerPtrVector)
	{
	    std::cout << "I'm a " << playerPtr->whatRace() << " "
			<< playerPtr->whatType() << " named " << playerPtr->getName()
			<< " and my attack is: \"" << playerPtr->attack() << "\"\n";
	}

	delete playerPtr;
	playerPtr = nullptr;
	return 0;
}

Type getCharacterType()
{
	int input;
	Type type;

	std::cout << "Pick your character type:\n"
		<< "  1. Warrior\n"
		<< "  2. Priest\n"
		<< "  3. Mage\n"
		<< "Enter your choice: ";
	std::cin >> input; 
	std::cout << "\n";
	switch (input)
	{
	case 1:
		type = WARRIOR;
		break;
	case 2:
		type = PRIEST;
		break;
	case 3:
		type = MAGE;
		break;
	}
	return type;
}
Race getCharacterRace()
{
	int input;
	Race race;

	std::cout << "Pick your character race:\n"
		<< "  1. Human\n"
		<< "  2. Elf\n"
		<< "  3. Dwarf\n"
		<< "  4. Orc\n"
		<< "  5. Troll\n"
		<< "Enter your choice: ";
	std::cin >> input;
	std::cout << "\n";
	switch (input)
	{
	case 1:
		race = HUMAN;
		break;
	case 2:
		race = ELF;
		break;
	case 3:
		race = DWARF;
		break;
	case 4:
		race = ORC;
		break;
	case 5:
		race = TROLL;
		break;
	}
	return race;
}
std::string getCharacterName()
{
	std::string name;

	std::cin.clear();
	std::cin.ignore();
	std::cout << "Enter your character's name: ";
	getline(std::cin, name);
	std::cout << "\n";
	return name;
}