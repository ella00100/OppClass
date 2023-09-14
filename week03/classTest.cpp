#include <iostream>
using namespace std;

int main(void) {
	int sumEven = 0;
	int sumOdd = 0;
	for ( int i = 1; i <= 100; i++) {
		if (i % 2 == 0)
		{
			sumEven = sumEven + i;
		}
		else
		{
			sumOdd = sumOdd + i;
		}
	}
	cout << "Sum of Even= " << sumEven << endl;

	cout << "Sum of Odd= " << sumOdd << endl;
	return 0;
}