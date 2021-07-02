/*
The first object contains -
Value 1: 300
Value 2: 10.09
The second object contains -
Value 1: 25
Value 2: Love C++
*/

#include <iostream>

using namespace std;

template<typename T1=int, typename T2=double>

class HoldsPair
{
private:
	T1 value1;
	T2 value2;
	
public:
	HoldsPair(const T1& val1, const T2& val2) //constructor
		: value1(val1), value2(val2) {}
		
	//Accessor functions
	const T1 & GetFirstValue () const
	{
		return value1;
	}
	
	const T2 & GetSecondValue ()
	{
		return value2;
	}
};

int main()
{
	HoldsPair<> pairIntDbl (300, 10.09);
	HoldsPair<short, const char*>pairShortStr(25,  "Love C++");
	
	cout << "The first object contains -" << endl;
	cout << "Value 1: " << pairIntDbl.GetFirstValue()<< endl;
	cout << "Value 2: " << pairIntDbl.GetSecondValue()<< endl;
	
	cout << "The second object contains -" << endl;
	cout << "Value 1: " << pairShortStr.GetFirstValue()<< endl;
	cout << "Value 2: " << pairShortStr.GetSecondValue()<< endl;
	
	return 0;
}
