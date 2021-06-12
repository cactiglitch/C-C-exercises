/*
Initialised dogsAge = 30
pointsToAge points to dogsAge
Enter an age for your dog: 12
Input stored at 0x838dbffd24
Integer dogsAge = 12 
 */
 
#include <iostream>

using namespace std;

int main()
{
	int dogsAge = 30;
	cout << "Initialised dogsAge = " << dogsAge << endl;
	
	int* pointsToAnAge = &dogsAge;
	cout <<  "pointsToAge points to dogsAge" << endl;
	
	cout << "Enter an age for your dog: ";
	
	cin >> *pointsToAnAge;
	
	cout << "Input stored at " << hex << pointsToAnAge << endl;
	
	cout << "Integer dogsAge = " << dec << dogsAge << endl;
	
	return 0;
}
