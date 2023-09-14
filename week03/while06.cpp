#include <iostream>
using namespace std;

//(o)
//int main(void) {
//	int x = 4, y = 0;
//	int z;
//
//	while (x >= 0) {
//		x--;
//		y++;
//		if (x == y)
//			continue;
//		else
//			cout << x << ", " << y << endl;
//	}
//	return 0;
//}

//(p)
int main(void) {
	int x = 4, y = 0;
	int z;

	while (x >= 0) {
		if (x == y)
			break;
		else
			cout << x << ", " << y << endl;
		x--;
		y++;
	}
	return 0;
}