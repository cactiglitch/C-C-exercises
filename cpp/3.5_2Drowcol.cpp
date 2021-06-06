/*
Integer[0] [0] = 34
Integer[0] [1] = -1
Integer[0] [2] = 879
Integer[0] [3] = 22
Integer[1] [0] = 24
Integer[1] [1] = 365
Integer[1] [2] = -101
Integer[1] [3] = -1
Integer[2] [0] = -20
Integer[2] [1] = 40
Integer[2] [2] = 90
Integer[2] [3] = 97
*/

#include <iostream>

using namespace std;

int main()
{
	const int NUM_ROWS = 3;
	const int NUM_COLS = 4;
	
	int MyInts[NUM_ROWS][NUM_COLS] ={ {34,-1,879,22},
									{24,365,-101,-1},
									{-20,40,90,97} };
	
	for(int i =0; i < NUM_ROWS; ++i)
		for (int j =0;  j < NUM_COLS; ++j)
			cout <<"Integer[" << i << "] [" << j << "] = " << MyInts[i][j] <<endl;
	
	return 0;
}
