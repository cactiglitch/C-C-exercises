/*
Enter radius of circle: 6
Area is = 113.256 
*/

#include <iostream>

using namespace std;

void calcarea(const double* const ptrPi, // const pointers to const data
				const double* const ptrRadius, 
				double* const ptrArea) //parameter meant ro store output
{
	if (ptrPi && ptrRadius && ptrArea) // check if caller inadverdently sends a NULL pointer
		*ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
}

int main()
{
	const double Pi = 3.146;
	
	cout << "Enter radius of circle: ";
	double radius = 0;
	cin >> radius;
	
	double area = 0;
	calcarea(&Pi, &radius, &area);
	
	cout <<"Area is = " <<area << endl;
	
	return 0;
}
