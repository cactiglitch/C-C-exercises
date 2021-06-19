/*
original = 30
original is at address: 0x197c5ffbcc
ref1 is at address: 0x197c5ffbcc
ref2 is at address: 0x197c5ffbcc
Therefore, ref2 = 30
*/

#include <iostream>

using namespace std;

int main()
{
	int original = 30;
	cout << "original = " << original << endl;
	cout << "original is at address: " << hex << &original <<endl;
	
	int& ref1 = original;
	cout << "ref1 is at address: " << hex << &original << endl;
	
	int& ref2 = ref1;
	cout << "ref2 is at address: " << hex << &ref2 << endl;
	cout << "Therefore, ref2 = " << dec << ref2 << endl;
	
	return 0;
}
