#include <iostream>
using namespace std;

int main(void)
{
	float a = 3.5;

	switch (int(a)) {
	case (int(0.5)):
		cout << "The art of C" << endl;
		break;
	case (int(1.5)):
		cout << "The spirit of C" << endl;
		break;
	case (int(2.5)):
		cout << "See through C" << endl;
		break;
	case (int(3.5)):
		cout << "Simply C" << endl;
	}
	return 0;
}