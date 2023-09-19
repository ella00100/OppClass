#include <iostream>
using namespace std;

int main(void)
{
	int k;
	float j = 2.0;

	switch (k = j + 1)
	{
	case 3:
		cout << "Trapped" << endl;
		break;
	default:
		cout << "Caught!" << endl;
	}
	return 0;
}