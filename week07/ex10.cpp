#include<iomanip>
#include<iostream>
using namespace std;

#define SIZE 7

void square_array(int a[], int size);
void print_array(int a[], int size);
void square_element(int e);

int main() {
	int list[SIZE] = { 1,2,3,4,5,6,7 };

	print_array(list, SIZE);
	square_array(list, SIZE);
	print_array(list, SIZE);

	cout << setw(3) << list[6] << endl;
	square_element(list[6]);
	cout << setw(3)  << list[6] << endl;
}

void square_array(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		a[i] = a[i] * a[i];
}

void square_element(int e)
{
	e *= e;
}

void print_array(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << setw(3) << a[i];
	cout << "\n";
}