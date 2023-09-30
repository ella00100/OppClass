#include <iostream>
using namespace std;

int square(int a);

void main() {
	int x = 15, z;
	z = square(x);
	cout << "z=" << z << endl;
}

int square(int a) {
	return (a * a);
}