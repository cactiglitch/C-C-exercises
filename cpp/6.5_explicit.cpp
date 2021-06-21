#include <iostream>

using namespace std;

class Human
{
	int age;
	
public:
	//explicit constructors blocks implicit conversions
	explicit Human(int humansAge) : age(humansAge) {}
};

void DoSomething(Human person)
{
	cout << "Human sent did something" << endl;
	return;
}

int main()
{
	Human kid(10);
	DoSomething(kid);
	
	return 0;
}
