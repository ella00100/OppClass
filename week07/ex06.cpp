#include <iostream>
using namespace std;

#define SIZE 5

int main() {
	int i;
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE];

	for (i = 0; i < SIZE; i++) {
		b[i] = a[i];
		cout << b[i] << endl;
	}

	return 0;
}
