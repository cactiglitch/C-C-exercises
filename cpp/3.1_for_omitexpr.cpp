/* for loop ommitting expression on user's request; 
 * identical to while loop;
 * contains on initialisation  expression and conitional expression; 
 * ignores option to change variable at end of each loop;
 */

#include <iostream>

using namespace std;

int main()
{
	for(char uInput = 'm'; (uInput != 'x');)
	{
		cout << "Enter the two integers: " << endl;
		int num1 = 0, num2 = 0;
		cin >> num1 >> num2;
		
		cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		
		cout << "Press x to exit or any other key to recalculate" << endl;
		cin >> uInput;
	}
	
	cout << "End of program!"<<endl;
	
	return 0;
}
