#include <iostream>
using namespace std;

int main(void) {
	int num = 0;
	cout << "Enter any number: ";
	cin >> num;
	
	switch (num%2)
	{
	case 0:
		cout << num << " is even" << endl;
		break;
	case 1:
		cout << num << " is odd" << endl;
		break;
	}

	return 0;
}