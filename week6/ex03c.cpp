#include <iostream>
using namespace std;

int check(int ch);

int main() {
	int i = 45, c;
	c = check(i);
	cout << "\n" << c << endl;
}

int check(int ch) {
	if (ch >= 45) return (100);
	else return (10 * 10);
}