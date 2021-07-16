#include "Square.h"

Square::Square()
{
	this->length = 1;
}

Square::Square(double length)
{
	this->length = length;
}

double Square::getLength() const
{
	return this->length;
}

void Square::setLength(double length)
{
	if (length >= 0)
	{
		this->length = length;
	}
}

double Square::area() const
{
	return this->length * this->length;
}

double Square::perimeter() const
{
	return this->length * 4;
}

bool Square::operator==(const Square& other)
{
	return this->length == other.length;
}

Square Square::operator+(const Square& other)
{
	Square newSquare(this->length + other.length);
	return newSquare;
}

void Square::operator=(const Square& other)
{
	this->length = other.length;
}
