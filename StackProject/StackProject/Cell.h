class Cell {
 public:
	Cell(int value, Cell* next);
	int getValue();
	Cell* getNext();

 private:
	int _value;
	Cell* _next;
};
