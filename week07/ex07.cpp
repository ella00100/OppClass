#include <iostream>
using namespace std;

#define SIZE 5

int main() {
	int i;
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 1,2,3,4,5 };

	if (a == b)
		cout << "wrong results.\n";
	else
		cout << "wrong results.\n";

	for (i = 0; i < SIZE; i++)
	{
		if (a[i] != b[i])
		{
			cout << "a[]!=b[]\n";
			return 0;
		}
	}
	cout << "a[]=b[]\n";
	return 0;
}