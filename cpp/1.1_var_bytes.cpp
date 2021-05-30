/*

Size in bytes:
Bool, Char = 1
unsigned short int, short int = 2
unsigned long int, long int = 4
unsigned long long, long long = 8
unsigned int, float = 4
double = 8

*/
#include <iostream>

using namespace std;

int main() 
{
	cout<<"C++ inbuilt variable sizes"<<endl;
	cout<<"Size of bool: "<< sizeof(bool) <<endl;
	cout<<"Size of char: "<< sizeof(char) <<endl;
	cout<<"Size of unsigned short int: " << sizeof(unsigned short)<<endl;
	cout<<"Size of short int: "<<sizeof(short)<<endl;
	cout<<"Size of unsigned long int: "<<sizeof(unsigned long)<<endl;
	cout<<"Size of long: "<<sizeof(long)<<endl;
	cout<<"Size of int: "<<sizeof(int)<<endl;
	cout<<"Size of unsigned long long: "<< sizeof(unsigned long long)<<endl;

	cout<<"Size of long long: "<< sizeof(long long) << endl;
	cout<<"Size of unsigned int: "<<sizeof(unsigned int)<< endl;
	cout<<"Size of float: "<<sizeof(float)<< endl;
	cout<<"Size of double: "<<sizeof(double)<<endl;
	return 0;
}
