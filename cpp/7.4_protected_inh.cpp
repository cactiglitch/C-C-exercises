#include <iostream>

using namespace std;

class Motor
{
public:
	void SwitchIgnition()
	{
		cout << "Ignition ON" << endl;
	}
	void PumpFuel()
	{
		cout << "Fuel in cylinders" << endl;
	}
	void FireCyclinders()
	{
		cout << "Vroooom" << endl;
	}
};

class Car:protected Motor
{
public:
	void Move()
	{
		SwitchIgnition();
		PumpFuel();
		FireCyclinders();
	}
};

class RaceCar:protected Car
{
public:
	void Move()
	{
		SwitchIgnition();
		PumpFuel();
		FireCyclinders();
		FireCyclinders();
		FireCyclinders();
	}
};

int main()
{
	RaceCar myDreamCar;
	myDreamCar.Move();
	
	return 0;
}
