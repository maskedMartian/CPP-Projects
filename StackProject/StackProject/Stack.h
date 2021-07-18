class Stack {
public:
	Stack();
	void push(int value);
	void pop();
	int peek() const;
	int size() const;
	bool empty() const;
private:
	int _size;
	Cell* _firstCell;
};
