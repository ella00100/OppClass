#include <iostream>
using namespace std;


void printit(int a, char ch);

int main() {
	float a = 15.5;
	char ch = 'C';
	printit(a, ch);

	return 0;
}

void printit(int a, char ch) {
	cout << "\n " << a << ", " << ch << endl;
}
