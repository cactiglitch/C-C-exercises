#include <iostream>

using namespace std;

int main()
{
	const int ARRAY_LENGTH = 5;
	int arr[ARRAY_LENGTH] = {0};
	
	cout << "Populate array of " << ARRAY_LENGTH << " integers " << endl;
	
	for (int counter = 0; counter < ARRAY_LENGTH; ++counter)
	{
		cout << "Enter an integer for element  " << counter << ": ";
		cin >> arr[counter];
	}
	
	cout << "Displaying contents of the array: " << endl;
	
	for(int counter = 0; counter < ARRAY_LENGTH; ++counter)
		cout << "Element " << counter << " = " << arr[counter] <<endl;
		
	return 0;
