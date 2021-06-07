#include <iostream>

using namespace std;

const double Pi = 3.14159265;

//function prototype
double Area(double radius);
double Circ(double radius);

int main()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;
	
	cout << "Area is: " << Area(radius) << endl;
	cout << "Circumference is: "<< Circ(radius) <<endl;
	
	return 0;
}

double Area(double radius)
{
	return Pi * radius * radius;
}

double Circ(double radius)
{
	return 2 * Pi *radius;
}
