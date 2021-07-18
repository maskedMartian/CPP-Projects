#include "Player.h"

const int PRIEST_HP = 100;
const int PRIEST_MP = 200;

class Priest : public Player
{
private:
	std::string characterClass{ "priest" };
public:
	Priest(const std::string name, const Race race) : Player(name, race, PRIEST, PRIEST_HP,
		PRIEST_MP)
	{
	}
	std::string attack()
	{
		return "I will assault you with Holy Wrath!";
	}
};

