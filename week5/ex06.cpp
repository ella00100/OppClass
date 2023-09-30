#include <iostream>
using namespace std;

int power(int x, int y);

int main() {
	int x = 2;
	int y = 10;

	cout << power(x, y) << endl;

	return 0;
}

int power(int x, int y) {
	int i;
	long result = 1;

	for (i = 0; i < y; i++) result *= x;
	return result;
}