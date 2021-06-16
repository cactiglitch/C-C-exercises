/*
pointToNums = 0xac8e5ff9a0
&myNumbers[0] = 0xac8e5ff9a0 
*/

#include <iostream>

using namespace std;

int main()
{
	int myNums[5]; //static array
	
	int* pointToNums = myNums; //array assigned to pointer to int
	
	cout << "pointToNums = " << hex << pointToNums << endl;
	
	cout << "&myNumbers[0] = " << hex << &myNums[0] << endl;
	
	return 0;
}
