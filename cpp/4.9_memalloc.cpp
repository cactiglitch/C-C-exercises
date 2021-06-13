/*
How many integers shall I reserve memory for?
10
Memory allocated at: 0x2465c5e1540
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "How many integers shall I reserve memory for?" << endl;
	int numEntries = 0;
	cin >> numEntries;
	
	int* myNumbers = new int[numEntries];
	
	cout << "Memory allocated at: " << myNumbers << hex << endl;
	
	delete[] myNumbers;
	
	return 0;
}
