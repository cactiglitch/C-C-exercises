/*
Integer age = 30
Integer dogsAge = 9
pointsToInt points to age
pointsToInt = 0x3afebff954
*pointsToInt = 30
pointsToInt points to dogsAge now
pointsToInt0x3afebff950
*pointsToInt = 9
*/

#include <iostream>

using namespace std;

int main()
{
	int age = 30;
	int dogsAge = 9;
	
	cout << "Integer age = " << age << endl;
	cout << "Integer dogsAge = " << dogsAge << endl;
	
	int* pointsToInt = &age;
	cout << "pointsToInt points to age" <<endl;
	
	cout << "pointsToInt = " << hex << pointsToInt << endl;
	//deference
	cout << "*pointsToInt = " << dec << *pointsToInt << endl;
	
	pointsToInt = &dogsAge;
	cout << "pointsToInt points to dogsAge now" << endl;
	
	cout << "pointsToInt" << hex << pointsToInt << endl;
	cout << "*pointsToInt = " << dec << *pointsToInt << endl;
	
	return 0;
}
