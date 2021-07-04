#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> in;
	in.push_back(50);
	in.push_back(1);
	in.push_back(987);
	in.push_back(1001);
	
	cout << "The vector contains: ";
	cout << in.size() << " Elements" << endl;
	
	return 0;
}
