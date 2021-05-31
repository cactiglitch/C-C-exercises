/*
Row 0: -501 205 2016
Row 1: 989 101 206
Row 2: 303 456 596
*/

#include <iostream>

using namespace std;

int main()
{
	int three_three [3][3] = \
	{
		{-501, 205, 2016}, {989, 101, 206}, {303, 456, 596}
	}; 


cout << "Row 0: "<< three_three[0][0] << " " \
				<<three_three[0][1]<< " " \
				<<three_three[0][2]<<endl;

cout << "Row 1: "<< three_three[1][0] << " " \
				<<three_three[1][1]<< " " \
				<<three_three[1][2]<<endl;

cout << "Row 2: "<< three_three[2][0] << " " \
				<<three_three[2][1]<< " " \
				<<three_three[2][2]<<endl;

return 0;

}

