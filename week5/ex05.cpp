#include <iostream>
using namespace std;

int get_integer(void);


int main() {

	int x = get_integer();
	cout << "x=" << x;

	return 0;
}

int get_integer() {
	int n;
	cout << "integer value: ";
	cin >> n;
	
	return n;
}