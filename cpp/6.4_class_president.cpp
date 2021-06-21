/*The name of the President is: Abraham Lincoln */

#include <iostream>
#include <string>

using namespace std;

class President
{
private:
	President() {};
	President(const President&);
	const President& operator = (const President&);
	
	string name;
	
public:
	static President& GetInstance()
	{
		//static obects are constructed only once
		static President onlyInstance;
		return onlyInstance;
	}
	
	string GetName()
	{ return name; }
	
	void SetName(string InputName)
	{ name = InputName; }
};

int main()
{
	President& onlyPresident = President::GetInstance();
	onlyPresident.SetName("Abraham Lincoln");
	
	cout << "The name of the President is: ";
	cout << President::GetInstance().GetName() << endl;
	
	 return 0;
 }
