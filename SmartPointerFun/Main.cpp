#include <iostream>
#include <memory>

int main()
{
	const int ARR_SIZE = 5;
	//std::unique_ptr<double> myDubPtr(new double);
	//std::unique_ptr<double> myDubPtr = std::make_unique<double>();
	auto myDubPtr = std::make_unique<double>();
	auto myArray = std::make_unique<int[]> (ARR_SIZE);

	*myDubPtr = 3.14;
	std::cout << "pointer value: " << *myDubPtr << "\n";

	std::unique_ptr<double> otherPtr = std::move(myDubPtr);
	std::cout << "pointer value: " << *otherPtr << "\n";
	//std::cout << "pointer value: " << *myDubPtr << "\n";

	for (int i = 0; i < ARR_SIZE; i++)
	{
		myArray[i] = i * 2;
	}
	for (int i = 0; i < ARR_SIZE; i++)
	{
		std::cout << i << "\n";
	}

	getchar();
	return 0;
}