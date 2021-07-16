#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
private:
	std::string color;
	int numDoors;
public:
	Car(std::string color, int numDoors);
	std::string getColor();
	int getNumDoors();
};

#endif
