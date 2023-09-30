#include <iostream>
using namespace std;

int factorial(int n);

int main() {

	int n;
	cout << "숫자를 입력하세요 : ";
	cin >> n;
	cout << factorial(n) << endl;
	return 0;
}


int factorial(int n) {
	int i;
	long result = 1;

	for (i = 1; i <= n; i++)
		result *= i;
	return result;
}