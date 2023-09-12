#include <iostream>
#include <iomanip>  

using namespace std;

int main(void)
{
	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	cout << "size of float =" << sizeof(float) << endl;
	cout << "size of double =" << sizeof(double) << endl;

	cout << "x =" << setw(30) << setprecision(25) << x <<  endl;
	cout << "y =" << setw(30) << setprecision(25) << y << endl;

	return 0;
}