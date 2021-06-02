/*
 * Start val: 101
 * Postfix value:101
 * After postfix val: 102
 * Prefix ++ value :102
 * After prefix value:102
 * Postfix -- value: 101
 * After postfix: 100
 * Prefix -- value: 100
 * After prefix value: 100
*/


#include <iostream>

using namespace std;

int main()
{
	int s_val = 101; //start value
	cout <<"Start value: "<< s_val << endl;
	
	int postfixInc = s_val++;
	cout<< "Postfix value ++: " << postfixInc << endl;
	cout<< "After postfix value: " << s_val << endl;
	
	s_val = 101; //Reset
	int prefixInc = ++s_val;
	cout<< "Prefix ++ value: " << prefixInc << endl;
	cout<< "After prefix value: " << s_val << endl;
	
	s_val = 101; //Reset
	int postfixDec = s_val--;
	cout<< "Postfix value --: " << postfixDec << endl;
	cout<< "After postfix value: " << s_val << endl;
	
	s_val = 101; //Reset
	int prefixDec = --s_val;
	cout<< "Prefix -- value: " << prefixDec << endl;
	cout<< "After prefix value: " << s_val << endl;
	
	return 0;
}



