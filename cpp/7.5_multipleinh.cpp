/*
Birds: Laid my eggs, am ligther now!
Mammal: Baby says glug!
Reptile: Shoo enemy! Spits venom!
Platypus: Voila, I can swim!
*/

#include <iostream>

using namespace std;

class Mammal
{
public:
	void FeedBabyMilk()
	{
		cout << "Mammal: Baby says glug!" << endl;
	}
};

class Reptile
{
public:
	void SpitVenom()
	{
		cout << "Reptile: Shoo enemy! Spits venom!" << endl;
	}
};

class Bird
{
public:
	void LaysEggs()
	{
		cout << "Birds: Laid my eggs, am ligther now!" << endl;
	}
};

class Platypus: public Mammal, public Bird, public Reptile
{
public:
	void Swim()
	{
		cout <<"Platypus: Voila, I can swim!"<< endl;
	}
};

int main()
{
	Platypus realFreak;
	realFreak.LaysEggs();
	realFreak.FeedBabyMilk();
	realFreak.SpitVenom();
	realFreak.Swim();
	
	return 0;
}
