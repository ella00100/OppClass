#include <iostream>
using namespace std;

#define SIZE 9
int binary_search(int list[], int n, int key);

int main(void)
{
	int key;
	int grade[SIZE] = { 1,2,3,4,5,6,7,8,9 };

	cout << "탐색할 값을 입력하시오: ";
	cin >> key;
	cout << "탐색 결과 = " << binary_search(grade, SIZE, key);

	return 0;
}

int binary_search(int list[], int n, int key)
{
	int low, high, middle;

	low = 0;
	high = n - 1;

	while (low <= high) {
		middle = (low + high) / 2;
		if (key == list[middle])
			return middle;
		else if (key > list[middle])
			low = middle + 1;
		else
			high = middle - 1;
	}
	return -1;
}