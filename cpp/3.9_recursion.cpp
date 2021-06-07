#include <iostream>

using namespace std;

int GetFib(int fibIndex)
{
	if(fibIndex < 2)
		return fibIndex;
	else
		return GetFib(fibIndex - 1) + GetFib(fibIndex - 2);
}

int main()
{
	cout << "Enter 0-based index of desired Fibonnaci Number: ";
	int index = 0;
	cin >> index;
	
	cout << "Fibonacci number is: " << GetFib(index) << endl;
	return 0;
}
