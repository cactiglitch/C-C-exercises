/* 

c-style strings danger; 
null terminator '\0';

 */

#include <iostream>

using namespace std;

int main()
{
	char sayHello[] = {'H','e','l','l','o',' ','W','o','r','l','d','\0'};
	cout << sayHello <<endl; //'Hello World'
	cout << "Size of array: " << sizeof(sayHello) <<endl; // size = 12

	cout << "Replacing space with null: "<<endl;
	sayHello[5] = '\0';
	cout << sayHello <<endl; // 'Hello'
	cout <<"Size of array: "<< sizeof(sayHello) <<endl; //size = 12

	return 0;
}
