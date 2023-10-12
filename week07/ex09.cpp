#include <iostream>
using namespace std;

#define SIZE 10

int main(void) {
	int grade[SIZE];
	int i, min;

	for (i = 0; i < SIZE; i++) {
		cout << "enter the scores: ";
		cin >> grade[i];
	}
	min = grade[0];

	for (i = 1; i < SIZE; i++)
	{
		if (grade[i] < min)
			min = grade[i];
	}
	cout << "minimun value is " << min << endl;
	return 0;
}