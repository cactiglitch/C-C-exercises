#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main() 
{
	cout << "Enter a line of text: " <<endl;
	string Input;
	getline(cin, Input);
	
	char copyInput[20] ={'\0'};
	
  if (Input.length() < 20) // Bound limit check
	{
		strcpy(copyInput, Input.c_str());
		cout<< "copyInput contains: " <<copyInput <<endl;
	}
	else
		cout << "Bounds exceeded and won't copy!" <<endl;
	
	return 0;
}
