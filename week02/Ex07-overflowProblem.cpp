#include <iostream> 

using namespace std;

int main(void)
{
	char x, x1, x2, x3;
	unsigned char y;

	x = -128;
	x1 = x - 1;
	x2 = x - 2;
	x3 = x - 3;

	cout << "x=" <<  static_cast<signed int>(x) << endl;
	cout << "x-1=" << static_cast<signed int>(x1) << endl;
	cout << "x-2=" << static_cast<signed int>(x2) << endl;
	cout << "x-3=" << static_cast<signed int>(x3) << endl;

	y = 256;
	cout << "y="  << static_cast<unsigned int>(y) << endl;
	cout << "y+1=" << static_cast<unsigned int>(y+1) << endl;
	cout << "y+2=" << static_cast<unsigned int>(y+2) << endl;
	cout << "y+3=" << static_cast<unsigned int>(y+3) << endl;
	
	return 0;
}