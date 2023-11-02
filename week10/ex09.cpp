#include <iostream>
using namespace std;

enum tvtype { LCD, LED, PDP, TD};

int main() {
	int num;
	enum tvtype type;
	cout << "Enter the type of TV: ";
	cin >> num;
	switch (num)
	{
	case LCD:
		type = LCD;
		cout << "LCD TV" << endl;
		break;
	case LED:
		type = LED;
		cout << "LED TV" << endl;
		break;
	case PDP:
		type = PDP;
		cout << "PDP TV" << endl;
		break;
	case TD:
		type = TD;
		cout << "3D TV" << endl;
		break;
	default:
		cout << "reselct the TY Type" << endl;
		break;
	}

	return 0;
}