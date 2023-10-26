#include <iostream>
using namespace std;

#define SIZE 9

int seq_search(int list[], int n, int key);

int main(void)
{
	int key;
	int grade[SIZE] = { 1,2,3,4,5,6,7,8,9 };
	
	cout << "탐색할 값을 입력하시오: ";
	cin >> key;
	cout << "탐색 결과 = " << seq_search(grade, SIZE, key) << endl;

	return 0;

}

int seq_search(int list[], int n, int key)
{
	int i;
	for (i = 0; i < n; i++)
		if (list[i] == key)
			return i;
		return -1;
}