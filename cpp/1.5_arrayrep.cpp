#include <iostream>

using namespace std;

constexpr int Square(int number) { return number*number; }

int main()
{
	const int ARRAY_L = 5; //array length
	int myNums [ARRAY_L] = {1, 10, 5, -101, 20};

	int moreNums[Square(ARRAY_L)];

	cout << "Enter desired index element: ";
	int eIndex = 0; //element index
	cin >> eIndex;

	cout << "Replace value: ";
	int nValue = 0; //new value
	cin >> nValue;

	myNums[eIndex] = nValue;
	moreNums[eIndex] = nValue;

	cout << "Element " << eIndex << " in array myNums is: ";
	cout << myNums[eIndex] <<endl; 

	cout << "Element " << eIndex << " in array moreNums is: ";
	cout << moreNums[eIndex] <<endl;

	return 0;
}
