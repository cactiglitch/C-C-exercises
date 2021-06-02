/*
Enter a number: 440
After += 8, value = 448
After -= 2, value = 446
After /= 4, value = 111
After *= 4, value = 444
After %= 1000, value = 444
After <<= 1, value = 888 //bitwise shift
After >>= 2, value = 222
After |= 0x55, value = 223 //bitwise or
After ^= 0x55, value = 138 //bitwise xor
After &= 0x0F, value = 10 // bitwise and
 */

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter a number: ";
	int value = 0;
	cin >> value;
	
	value +=8;
	cout <<"After += 8, value = " << value <<endl;
	value -=2;
	cout<<"After -= 2, value = " << value <<endl;
	value /= 4;
	cout<<"After /= 4, value = " << value <<endl;
	value *= 4;
	cout<<"After *= 4, value = " << value <<endl;
	value %= 1000;
	cout<<"After %= 1000, value = " << value <<endl;
	
	cout << "After <<= 1, value = " << (value <<=1) <<endl;
	cout << "After >>= 2, value = " << (value >>=2) <<endl;
	
	cout <<"After |= 0x55, value = " << (value |= 0x55) <<endl;
	cout <<"After ^= 0x55, value = " << (value ^= 0x55) <<endl;
	cout <<"After &= 0x0F, value = " << (value &= 0x0F) <<endl;
	
	return 0;
}
