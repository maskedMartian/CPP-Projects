#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// ===== declarations and initializations
	// declare a vector - empty
    vector<int> stuff;
    // decalre a vector with two slots, both initlized to 0
    vector<double> stuff1(2);
    // declare a vector and initilize it with 5 values
	vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    // ==== output
    // cout << stuff[0] << "\n";  // causes: Segmentation fault (core dumped)
    cout << stuff1[0] << '\n';
	cout << stuff1[1] << "\n";

	for (int i = 0; i < vowels.size(); i++)
	{
		cout << vowels[i] << "\n";
	}

	vowels[2] = 'p';

	for (int i = 0; i < vowels.size(); i++)
	{
		cout << vowels[i] << "\n";
	}

	vowels.push_back('y');
	vowels[2] = 'i';

	for (int i = 0; i < vowels.size(); i++)
	{
		cout << vowels[i] << "\n";
	}

	// ==== adding and removing elements
    stuff.push_back(69);
    stuff.push_back(42);

    cout << stuff[1] << "\n";
    cout << stuff.size() << "  ";  // prints 2
    stuff.pop_back(); // removes 42
    cout << stuff.size() << "\n";  // prints 1



	return 0;
}