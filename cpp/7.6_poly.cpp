/*
Tuna swims!
Fish swims!
*/

#include <iostream>

using namespace std;

class Fish
{
public:
	void Swim()
	{
		cout << "Fish swims! " << endl;
	}
};

class Tuna: public Fish
{
public:
	void Swim()
	{
		cout << "Tuna swims!" << endl;
	}
};

void MakeFIshSwim(Fish& inputFish)
{
	inputFish.Swim();
}

int main()
{
	Tuna myDinner;
	myDinner.Swim();
	MakeFIshSwim(myDinner);
	return 0;
}
