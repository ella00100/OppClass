#include <iostream>
using namespace std;

#define SIZE 5

int main() {
	int array[SIZE] = { 1,2,3,4,5};
	int i;

	for (i = 0; i < SIZE; i++)
		cout << "array[" << i << "]" << "\t" << array[i] << endl;

	return 0;
}