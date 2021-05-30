#include <iostream>

using namespace std;

int main() {
	auto coin_Heads = true;
	auto largeNum = 2500000000000;

	//auto assign bool, double: 1 & 8 bytes
	cout <<"coin_Heads= " << coin_Heads;
	cout <<" , sizeof(coin_Heads) = " << sizeof(coin_Heads) <<endl; 

	cout <<"largeNum= " << largeNum;
	cout <<" , sizeof(largeNum) = " << sizeof(largeNum) <<endl;

	return 0;
}
