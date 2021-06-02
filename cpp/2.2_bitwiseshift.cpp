/* 
16
4
8
32
64
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter a number: ";
	int inputNum = 0;
	cin >> inputNum; //16 or binary 1000
	
	int halfNum = inputNum >> 1; //0100 = 8
	int quarterNum = inputNum >> 2; //0010 = 4
	int doubleNum = inputNum << 1; //10000 = 32
	int quadrupleNum = inputNum << 2; //100000 = 64
	
	cout << "Quarter: " << quarterNum << endl;
	cout << "Half : " << halfNum << endl;
	cout << "Double: " << doubleNum <<endl;
	cout << "Quadruple: "<<quadrupleNum <<endl;
	
	return 0;
}
	
