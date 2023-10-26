#include <iostream>
using namespace std;

#define SIZE 6

int main(void)
{
	int freq[SIZE] = { 0 };
	int i;

	for (i = 0; i < 10000; i++)
		++freq[rand() % 6];

	cout << "========================" << endl;
	cout << "¸é ºóµµ" << endl;
	cout << "========================" << endl;

	for (i = 0; i < SIZE; i++)
		cout << i << "   " << freq[i] << endl;

	return 0;
}