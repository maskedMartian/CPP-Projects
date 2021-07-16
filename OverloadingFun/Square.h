#pragma once

class Square
{
private:
	double length;
public:
	Square();
	Square(double length);
	double getLength() const;
	void setLength(double length);
	double area() const;
	double perimeter() const;
	bool operator==(const Square& other);
	Square operator+(const Square& other);
	void operator=(const Square& other);
	bool operator!=(const Square& other)
	{
		return this->length != other.length;
	}
};