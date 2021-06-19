/*
Default constructor: name and age not set.
Overloaded constructor creates Eve of 20 years 
*/

#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
	string name;
	int age;
	
public:
	Human() //default constructor 
	{
		age = 1; //initialization
		cout << "Default constructor: name and age not set." <<endl;
	}
	
	Human(string humansName, int humansAge)
	{
		name = humansName;
		age = humansAge;
		cout << "Overloaded constructor creates ";
		cout << name << " of " << age << " years" <<endl;
	}
};

int main()
{
	Human firstMan;
	Human firstWoman("Eve", 20);
}
