#include <iostream>

using namespace std;

int main()
{
	cout << "Enter two integers: " <<endl;
	int num1 = 0;
	int num2 = 0;
	cin >> num1;
	cin >> num2;
	
	cout <<"Enter \'m\'to multiply, anything else to add: ";
	char userSelect = '\0';
	cin >> userSelect;
	
	int result = 0;
	if (userSelect == 'm')
		result = num1*num2;
	else
		result = num1 + num2;
	
	cout <<"result is: " << result <<endl;
	return 0;
}
