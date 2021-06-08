#include <iostream>

using namespace std;

const double Pi = 3.1416;

void Area ( double radius, double& result)// takes 2nd param by ref
{
	result = Pi * radius * radius;
}

int main()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;
	
	double areaFetched = 0;
	Area (radius, areaFetched); // invoke two parameters; 2nd = result;
	
	cout<< "The area is :"<< areaFetched <<endl;
	return 0;
}
