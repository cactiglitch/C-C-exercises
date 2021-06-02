// true(1), false(0)

#include <iostream>

using namespace std;

int main()
{
	cout << "Answer questions with 0 or 1" << endl; 
	cout << "Is there a discount? ";
	bool Discount = false;
	cin >> Discount;
	
	cout << "Did you get a fantastic bonus? "<<endl;
	bool fantasticBonus = false;
	cin >> fantasticBonus;
	
	if (Discount || fantasticBonus)
		cout << "Congratulations, you can buy that car!" << endl;
	else
		cout << "Sorry, waiting a while is a good idea" << endl;
	
	if(!Discount)
		cout << "Car not on discount" << endl;
		
	return 0;	
}
		
