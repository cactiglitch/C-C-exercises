#include <iostream>

using namespace std;

int main()
{
	int age = 30;
	const double Pi = 3.1216;
	
	cout <<"Integer age is located at:" << &age <<endl;
	cout <<"Double Pi is located at:" << &Pi << endl;
	
	return 0;
}
