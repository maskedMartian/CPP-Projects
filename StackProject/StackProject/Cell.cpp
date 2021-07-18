#include "Cell.h"

Cell::Cell(int value, Cell* next) 
	:_value{value}, 
	 _next{next} {
}

int Cell::getValue() {
	return _value;
}

Cell* Cell::getNext() {
	return _next;
}