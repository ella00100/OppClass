#include <iostream>
using namespace std;

int main(void) {
	char suite = 3;
	switch (suite)
	{
	case 1:
		cout << "Diamond" << endl;
	case 2:
		cout << "Spade" << endl;
	case 3:
		cout << "Heart" << endl;
	}
	cout << "thought one wears a suite" << endl;
}