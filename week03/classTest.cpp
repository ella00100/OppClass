#include <iostream>
using namespace std;

int main(void) {
	int sum = 0;
	for ( int i = 1; i <= 10; i++) {
		cout << "i= " << i << endl;
		sum = sum + i;
	}
	cout << "sum= " << sum << endl;
	return 0;
}