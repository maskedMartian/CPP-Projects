#include <iostream>

using namespace std;

class Tester {
private:
	int x = 4;
public:
	void modifier() const;
	void modifier1();
};

void Tester::modifier() const {
	cout << x << "\n";
}

void Tester::modifier1() {
	x++;
}

int main() {
	Tester t;
	t.modifier();
	t.modifier1();
	t.modifier();
	return 0;
}

