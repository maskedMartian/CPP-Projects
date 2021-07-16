#include <iostream>

int main() {
	for (int i = 1; i < 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			std::cout << i << "fuck\n";
		}
		if (i % 15 == 0) {
			std::cout << i << "you\n";
		}
	}
	
	system("pause");
	return 0;
}
