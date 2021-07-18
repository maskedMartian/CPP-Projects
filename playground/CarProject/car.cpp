//car.cpp

#include <iostream>
#include "car.h"

Car::Car() : _speed(0), _direction(0) {
    std::cout << "The car has been constructed (0mph:0degrees)\n";
}

Car::Car(int speed, int direction) : _speed(speed), _direction(direction) {
    std::cout << "The car has been constructed (" << _speed << "mph:" << _direction << "degrees)\n";
}

Car::~Car() {
	// Empty
}

