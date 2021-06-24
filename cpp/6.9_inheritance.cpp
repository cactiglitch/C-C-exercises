/*
About my food
Lunch: Swims in sea
Dinner: Swims in sea
*/

#include <iostream>
using namespace std;

class Fish
{
protected:
	bool isFreshWaterFish; // accesible only to derived class
	
public:
	void Swim()
	{
		if (isFreshWaterFish)
			cout << "Swims in lake" << endl;
		else
			cout << "Swims in sea" << endl;
	}
};

class Tuna: public Fish
{
public:
	Tuna()
	{
		isFreshWaterFish = false; //set protected member in base
	}
};

class Carp: public Fish
{
public:
	Carp()
	{
		isFreshWaterFish = false;
	}
};

int main()
{
	Carp myLunch;
	Tuna myDinner;
	
	cout << "About my food" << endl;
	
	cout << "Lunch: ";
	myLunch.Swim();
	
	cout << "Dinner: ";
	myDinner.Swim();
	
	return 0;
}
