/*
I am Adam and am 28 years old
I am Eve and am 28 years old
*/

#include <iostream>
#include <string>

using namespace std;

class Human
{
public:
	string name;
	int age;
	
	void IntroduceSelf()
	{
		cout << "I am " + name << " and am ";
		cout << age << " years old" << endl;
	}
};

int main()
{
	Human firstMan;
	firstMan.name = "Adam";
	firstMan.age = 28;
	
	Human firstWoman;
	firstWoman.name = "Eve";
	firstWoman.age = 28;
	
	firstMan.IntroduceSelf();
	firstWoman.IntroduceSelf();
}
