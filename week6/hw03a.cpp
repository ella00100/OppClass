#include <iostream>
using namespace std;

int sum = 0;
int get_sum(int n);

int main() {
	int n = 0;
	cout << "���ڸ� �Է��ϼ���: ";
	cin >> n;

	sum = get_sum(n);

	cout << "1~" << n << "������ ���� " << sum << endl;

	return 0;
}

int get_sum(int n) {
	for (int i = 0; i <= n; i++)
		sum = sum + i;
	return sum;
}