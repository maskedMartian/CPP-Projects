#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int dice, rolls, sum;
	char answer;
	bool rollAgain = true;
	
	srand((int) time(nullptr));
	while (rollAgain) {
		sum = 0;
	    cout << "Enter quantity of dice rolls: ";
	    cin >> rolls;
	    for (int i = 1; i <= rolls; i++) {
	        dice = (rand() % 6) + 1;
	        cout << "Die " << i << " roll: " << dice << "\n";
	        sum += dice;
        }
        cout << "Dice total: " << sum;
        cout << "\n\nDo you want to roll again? (y/n) ";
        cin >> answer;
		rollAgain = (answer == 'y' || answer == 'Y') ? true : false;
    }
	return 0;
}

