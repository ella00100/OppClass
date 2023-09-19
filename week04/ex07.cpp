#include <iostream>
using namespace std;

int main(void)
{
	int i = 1;
	switch(i - 2) {
	case -1:
		cout << "Feeding fish" << endl;
	case 0:
		cout << "Weeding grass" << endl;
	case 1:
		cout << "mending roof" << endl;
	default:
		cout << "Just to survive" << endl;

	}
	return 0;
}