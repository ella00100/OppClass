#include <iostream>
using namespace std;

int square(int n);

int main() {

	int n;
	cout << "숫자를 입력하세요: ";
	cin >> n;
	cout << "Squre(" << n << ") = "<<  square(n) << endl;

	return 0;
}

int square(int n) {
	return (n * n);
}