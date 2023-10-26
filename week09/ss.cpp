#include <iostream>
using namespace std;

int main() {
	switch (49) {
	case 1:
		cout << "case 1";
	case '1':
		cout << "case 2";
	case 49: 
		cout << "case 49";
	default:
		cout << "default" << endl;
		break;
	}
}
