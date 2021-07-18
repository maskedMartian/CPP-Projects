#include <assert.h>
#include "Cell.h"
#include "Stack.h"

Stack::Stack() 
	:_size{ 0 },
	 _firstCell{ nullptr } {
}

void Stack::push(int value) {
	assert(_firstCell = new Cell(value, _firstCell));
	_size++;
}

void Stack::pop() {
	if (!empty()) {
		Cell* tempCellHolder = _firstCell;
		_firstCell = _firstCell->getNext();
		delete tempCellHolder;
		_size--;
	}
}

int Stack::peek() const {
	assert(!empty());
	return _firstCell->getValue();
}

int Stack::size() const {
	return _size;
}

bool Stack::empty() const {
	return (_size == 0);
}
