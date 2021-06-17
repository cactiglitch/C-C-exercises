/*
Display aray using pointer syntax, operator*
Element 0 = 24
Element 1 = -1
Element 2 = 365
Element 3 = -999
Element 4 = 2011
Display aray using pointer syntax, operator[]
Element 0 = 24
Element 1 = -1
Element 2 = 365
Element 3 = -999
Element 4 = 2011
*/

#include <iostream>

using namespace std;

int main()
{
	const int a_len = 5;
	int myNum[a_len] = {24, -1, 365, -999, 2011};
	
	int* pointToNums = myNum;
	
	cout << "Display aray using pointer syntax, operator*" << endl;
	for(int i = 0; i < a_len; ++i)
		cout << "Element " << i << " = " << *(myNum + i) <<endl;
	cout << "Display aray using pointer syntax, operator[]" << endl;	
	for(int i = 0; i < a_len; ++i)
		cout << "Element " << i << " = " << pointToNums[i]<<endl;
	
	return 0;
}
