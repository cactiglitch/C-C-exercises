#include<iostream>

using namespace std;

// incremental by one
enum cardinals 
{
	North = 25,
	South, 
	East,
	West
};

int main() {
	cout <<"Displaying directions & values: "<<endl; 
	cout <<"North: "<< North << endl; //25
	cout <<"South: "<< South << endl; //26
	cout <<"East: "<< East << endl; //27
	cout <<"West: "<< West <<endl; //28

	cardinals windDirection = South; //assign 26
	cout<<"Variable windDirection = "<<windDirection<<endl;
	return 0;
}
