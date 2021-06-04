#include <iostream>

using namespace std;

int main()
{
	char userSelection = 'x';
	do
	{
		cout << "Enter two integers: " <<endl;
		int num1, num2;
		cin >> num1 >> num2;
		
		cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		cout << "Press x to exit(x) or any other key to recalculate" <<endl;
		cin >> userSelection;
	}
	while(userSelection != 'x');
	
	cout << "End of program!"<<endl;
	
	return 0;
}
