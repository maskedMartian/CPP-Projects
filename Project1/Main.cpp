#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 10> myNums;

	for (int i = 0; i < int(myNums.size()); i++) {
        myNums[i] = i * 2;
	}

	for (int element : myNums) {
        cout << element << "\n";
	}
	
	int x;
	cin >> x;
	return 0;
}