#include <iostream>
using namespace std;

#define SIZE 101

int main(void) {
	int freq[SIZE];
	int i, score;
	for (i = 0; i < SIZE; i++)
		freq[i] = 0;

	while (1)
	{
		cout << "���ڸ� �Է��Ͻÿ� (���� -1): ";
		cin >> score;
		if (score < 0) break;
		freq[score]++;
	}

	cout << "�� �� " << endl;
	for (i = 0; i < SIZE; i++)
		cout << i << "  " << freq[i] << endl;

	return 0;
}