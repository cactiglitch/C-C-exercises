#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> dynArray(3); // 

	dynArray[0] = 365;
	dynArray[1] = -421;
	dynArray[2] = 789;

	cout << "Number of integers in array: "<< dynArray.size() <<endl;

	cout << "Enter another element to insert: " <<endl;
	int nValue = 0;
	cin >> nValue;
	dynArray.push_back(nValue); // size +1

	cout << "Number of integers in array: "<< dynArray.size() <<endl; //size = 4
	cout << "Last element in array: "; //inserted element
	cout << dynArray[dynArray.size()-1] <<endl; 
	return 0;

}
