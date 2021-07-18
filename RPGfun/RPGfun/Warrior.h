#include "Player.h"

const int WARRIOR_HP = 200;
const int WARRIOR_MP = 0;

class Warrior : public Player
{
private:
	std::string characterClass{ "warrior" };
public:
	Warrior(std::string name, Race race) : Player(name, race, WARRIOR, WARRIOR_HP, 
		WARRIOR_MP)
	{
	}
	std::string attack()
	{
		return "I will destroy you with my sword, foul demon!";
	}
};
