#include "Player.h"

Player::Player(std::string name, Race race, Type type, int hitPoints, int magicPoints)
{
	this->name = name;
	this->race = race;
	this->type = type;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
}
std::string Player::getName() const
{
	return this->name;
}
Race Player::getRace() const
{
	return this->race;
}
std::string Player::whatRace() const
{
	std::string races[5] = { "Human", "Elf", "Dwarf", "Orc", "Troll" };
	return races[this->race];
}
Type Player::getType() const
{
	return this->type;
}
std::string Player::whatType() const
{
	std::string types[3] = { "Warrior", "Priest", "Mage" };
	return types[this->type];
}
int Player::getHitPoints()const
{
	return this->hitPoints;
}
int Player::getMagicPoints() const
{
	return this->magicPoints;
}
void Player::setName(std::string name)
{
	this->name = name;
}
void Player::setRace(Race race)
{
	this->race = race;
}
void Player::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}
void Player::setMagicPoints(int magicPoints)
{
	this->magicPoints = magicPoints;
}