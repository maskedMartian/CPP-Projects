#include "Player.h"

const int MAGE_HP = 150;
const int MAGE_MP = 150;

class Mage : public Player
{
private:
	std::string characterClass{ "mage" };
public:
	Mage(const std::string name, const Race race) : Player(name, race, MAGE, MAGE_HP,
		MAGE_MP)
	{
	}
	std::string attack()
	{
		return "I will crush you with the power of my arcane missiles!";
	}
};