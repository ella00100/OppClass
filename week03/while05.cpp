#include <iostream>
using namespace std;

//(l)
//int main(void) {
//	double x = 1.1;
//
//	while (x == 1.1) {
//		cout << x << endl;
//		x = x - 0.1;
//	}
//	return 0;
//}

//(m)
//int main(void) {
//	while ('1' < '2') {
//		cout << "In while loop" << endl;
//		break;
//	}
//	return 0;
//}

//(n)
int main(void) {
	int x;
	for (x = 0; x <= 255; x++) {
		cout << "Ascii value " << x << " Character " << char(x) << endl;
	}
	return 0;
}