 #pragma once

class Alien
{
public:
	Alien(int weight, int height, char gender);
    int getWeight() const; 
    int getheight() const;
    char getGender() const;
    int getPrestige() const;
    bool operator==(Alien other) const;
    bool operator!=(Alien other) const;
    bool operator>(Alien other) const;
    bool operator<(Alien other) const;
    bool operator>=(Alien other) const;
    bool operator<=(Alien other) const;
    int operator+(Alien other) const; 
private:
	int weight;
	int height;
	char gender;
};
