#include <iostream>
using namespace std;

int get_max(int x, int y);

int main() {

	int x = 3;
	int y = 9;
	cout << get_max(x, y) << endl;
	return 0;
}

int get_max(int x, int y) {

	if (x > y) return(x);
	else return(y);
}