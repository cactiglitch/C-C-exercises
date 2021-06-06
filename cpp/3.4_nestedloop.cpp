/*
Multipying each int in myNums1 by each in myNums2:
35 x 20 = 700
35 x -1 = -35
-3 x 20 = -60
-3 x -1 = 3
0 x 20 = 0
0 x -1 = 0
*/

#include <iostream>

using namespace std;

int main()
{
	const int ARRAY1_LEN = 3;
	const int ARRAY2_LEN = 2;
	
	int myNums1[ARRAY1_LEN] = {35, -3, 0};
	int myNums2[ARRAY2_LEN] = {20, -1};
	
	cout << "Multipying each int in myNums1 by each in myNums2: " <<endl;
	
	for(int i = 0; i < ARRAY1_LEN; ++i)
		for(int j = 0; j < ARRAY2_LEN; ++j)
			cout << myNums1[i] << " x " << myNums2[j] \
			<< " = " << myNums1[i] * myNums2[j] << endl;

	return 0;
}
