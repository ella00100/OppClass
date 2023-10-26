#include <iostream>
using namespace std;

#define SIZE 10

void selection_sort(int list[], int n);
void print_list(int list[], int n);

int main(void)
{
	int grade[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };
	
	cout << "원래의 배열" << endl;
	print_list(grade, SIZE);

	selection_sort(grade, SIZE);

	cout << "정렬된 배열" << endl;
	print_list(grade, SIZE);

	return 0;
}

void print_list(int list[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << list[i] << endl;
	cout << endl;
}

void selection_sort(int list[], int n)
{
	int i, j, temp, least;

	for (i = 0; i < n - 1; i++)
	{
		least = i;
		for (j = i + 1; j < n; j++)
			if (list[j] < list[least])
				least = j;

		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}
}