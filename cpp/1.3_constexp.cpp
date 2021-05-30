#include <iostream>

constexpr double GetPi() { return 22.0/7; }
constexpr double twicePI() { return 2 * GetPi(); }

using namespace std;

int main()
{
	const double pi = 22.0/7;

	//const pi, constexpr pi = 3.14286
	cout << "constant pi value= "<< pi<< endl; 
	cout << "constexpr GetPi= "<< GetPi() <<endl;
	cout << "constexpr twicePI()= "<<twicePI()<<endl;
	return 0;
}
