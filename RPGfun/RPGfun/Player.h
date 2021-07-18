#ifndef PLAYER_H
#define PLAYER_H

#include <string>

enum Race { HUMAN, ELF, DWARF, ORC, TROLL };
enum Type { WARRIOR, PRIEST, MAGE };

class Player
{
private:
    std::string name;
    Race race;
    Type type;
    int hitPoints;
    int magicPoints;
public:
    Player(std::string name, Race race, Type type, int hitPoints, int magicPoints);
    std::string getName() const;
    Race getRace() const;
    std::string whatRace() const;
    Type getType() const;
    std::string whatType() const;
    int getHitPoints()const;
    int getMagicPoints() const;
    void setName(std::string name);
    void setRace(Race race);
    void setHitPoints(int hitPoints);
    void setMagicPoints(int magicPoints);
    virtual std::string attack() = 0;
};

#endif