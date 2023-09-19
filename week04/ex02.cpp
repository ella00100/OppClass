#include <iostream>
using namespace std;

int main(void)
{
	int c = 3;

	switch (c)
	{
	case 'v':
		cout << "I am in case v" << endl;
		break;
	case 3:
		cout << "I am in case 3" << endl;
		break;
	case 12:
		cout << "I am in case 12" << endl;
		break;
	default:
		cout << "I am in default" << endl;
	}

	return 0;

}