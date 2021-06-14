/*
How many integers you wish to enter? 2
Allocated for 2 integers
Enter number 0 300
Enter number 1 400
Displaying all numbers entered:
300 400
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "How many integers you wish to enter? ";
	int numEntries = 0;
	cin >> numEntries; //input number of entries
	
	int * pointsToInts = new int[numEntries];
	
	cout << "Allocated for " << numEntries << " integers" <<endl;
	for(int c = 0; c < numEntries; ++c)
	{
		cout << "Enter number " << c << " ";
		cin >> *(pointsToInts + c);
	}
	
	cout << "Displaying all numbers entered: "<< endl;
	for(int c = 0; c < numEntries; ++c)
		cout << *(pointsToInts++) << " "; //++ for increment the adress contained in the ptr var
	                                    //to the net valid integer in the allocated memory
	cout << endl;
	
	pointsToInts -= numEntries; // ad pointsToInts modified by ++; bring pointer back to original position
	
	delete[] pointsToInts; //dealloc 
	
	return 0;
}
