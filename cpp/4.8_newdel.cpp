/*
Enter your dog's age: 7
Age 7 is stored at 0x19a0dae1540
*/
#include <iostream>

using namespace std;

int main()
{
	int* pointsToAnAge = new int;
	
	cout <<"Enter your dog's age: ";
	cin >> *pointsToAnAge;
	
	cout << "Age " << *pointsToAnAge << " is stored at " << hex \
	<< pointsToAnAge << endl;
	
	delete pointsToAnAge;
	
	return 0;
}
