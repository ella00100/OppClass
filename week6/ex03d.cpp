#include <iostream>
using namespace std;

int multiply(int ch);

int main() {
	int i = 45, c;
	c = multiply(i * 1000);
	cout << "\n" << c << endl;

	return 0;
}

int multiply(int ch)
{
	if (ch >= 40000) return (ch / 10);
	else return (10);
}