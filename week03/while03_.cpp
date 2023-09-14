#include <iostream>

using namespace std;

//(f)
//int main(void)
//{
//	int x = 0;
//	while (x <= 255) {
//		cout << "Ascill value " << x << " Character " << char(x) << endl;
//		x++;
//	}
//	return 0;
//}

//(g)
//int main(void) {
//	int x = 4;
//	int y = --x;
//	int z = x--;
//
//	cout << x << ", " << y << ", " <<  z << endl;
//  return 0;
//}

//(h)
int main(void) {
	int x = 4;
	int y = 3;
	int z = x-- - y;
	cout << x << ", " << y << ", " << z << endl;
	return 0;
}