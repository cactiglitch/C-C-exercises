/*
pointsToInt points to age now
pointsToInt = 0x 0x46a63ffd04
pointsToInt points to dogsAge now
pointsToInt = 0x 0x46a63ffd00
*/

#include <iostream>

using namespace std;

int main()
{
	int age = 30;
	int* pointsToInt = &age;
	cout<< "pointsToInt points to age now" << endl;
	
	cout << "pointsToInt = 0x " << hex << pointsToInt << endl;
	
	int dogsAge = 9;
	pointsToInt = &dogsAge;
	cout<< "pointsToInt points to dogsAge now" <<endl;
	
	cout << "pointsToInt = 0x " << hex << pointsToInt << endl;
	
	return 0;
}
