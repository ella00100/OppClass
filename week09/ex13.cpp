#include <iostream>
using namespace std;
#define SIZE 5

int main(void)
{
	int data[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		cout << "������ �Է��Ͻÿ�: ";
		cin >> data[i];
	}

	for (i = SIZE - 1; i >= 0; i--)
		cout << data[i] << endl;
	return 0;
}