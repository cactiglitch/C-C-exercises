#include <iostream>

using namespace std;

int main()
{
	Start:
		int num1 = 0, num2 = 0;
		cout << "Enter two integers: " <<endl;
		cin >> num1 >> num2;
		
		cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		
		cout << "Do you wish to perform another operation (y/n)?" <<endl;
		char input = 'y';
		cin >> input;
		
		if (input == 'y')
			goto Start;
			
		cout << "Goodbye!" <<endl;
		
		return 0;
}
