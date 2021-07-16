#include <iostream>
#include "Animal.h"
#include "Dog.h"
using namespace std;

int main()
{
	//Animal animal("Sam", 100);

	Animal* dogPtr = new Dog("Oreo", 35, "Border Collie");

	cout << "Make noise? " << dogPtr->makeNoise() << endl;
	cout << "Eat food?   " << dogPtr->eat() << endl;

	//cout << "Animal name: " << animal.getName() << "\n";
	//cout << "Animal weight: " << animal.getWeight() << "\n";
	//cout << "Animal noise: " << animal.makeNoise() << "\n";

	Dog dog("Robin", 26, "Dalmatian");

	cout << "Dog name: " << dog.getName() << "\n";
	cout << "Dog weight: " << dog.getWeight() << "\n";
	cout << "Dog noise: " << dog.makeNoise() << "\n";
	cout << "Food: " << dog.eat() << "\n";
	dog.digHole();
	dog.chaseCat();

	delete dogPtr;
	dogPtr = nullptr;

	cin.clear();
	getchar();
	return 0;
}