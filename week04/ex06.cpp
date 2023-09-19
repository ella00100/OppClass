#include <iostream>
using namespace std;


int main(void) {
	int ch = 'a' + 'b';
	switch (ch)
	{
	case 'a':
		cout << "You entered a" << endl;
	case 'b':
		cout << "You entered b" << endl;
	case 'A':
		cout << "a as in ashar" << endl;
	case 'b' + 'a':
		cout << "You entered a and b" << endl;
	}
	return 0;
}