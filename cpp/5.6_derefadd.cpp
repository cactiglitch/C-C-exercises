#include <iostream>

using namespace std;

void GetSquare(int& number) 
{
	number *= number; //deref address
}

int main()
{
	cout << "Enter a number you wish to square: ";
	int number =0;
	cin >> number;
	
	GetSquare(number);
	cout << "Square is: " << number << endl;
	
	return 0;
}
