#include <iostream>
#include <stdexcept>
using namespace std;

int imBroken(int num, int num1);

int main()
{
	int a;

	a = imBroken(10, 5);
	cout << a << endl;

	a = imBroken(10, 0);
	cout << a << endl;

	return 0;
}

int imBroken(int num, int num1)
{
	int result = 0;

	if (num1 != 0)
	{
		result = num / num1;
	}
	else
	{
		throw invalid_argument("Cannot divide by 0");
	}
	return result;
}