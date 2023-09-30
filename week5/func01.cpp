#include <iostream>
using namespace std;

int add(int x, int y);
double add(double x, double y);

int main() {
	int x = 10;
	int y = 20;
	int z = add(x, y);

	cout << "z = " << z << endl;
	cout << "z = " << add(1.2, 3.5) << endl;

	return 0;
}

int add(int x, int y) {
	return(x + y);
}
double add(double x, double y) {
	return(x + y);
}