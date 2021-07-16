#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> myVector(5);

	myVector[0] = "Batman";
	myVector[1] = "Robin";
	myVector[2] = "Batgirl";
	myVector[3] = "Nightwing";
	myVector[4] = "Red Hood";

	myVector.insert(myVector.begin() + 2, "John Baugh");
	myVector.pop_back();

	for (string name : myVector)
	{
		cout << name << "\n";
	}
}
