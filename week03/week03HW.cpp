#include <iostream>
using namespace std;

//while¹®

//int main(void) {
//	int i = 0;
//	int sum = 0;
//	
//	while (i < 100) {
//		i++;
//		sum = sum + i;
//	}
//	cout << sum << endl;
//
//	return 0;
//}

// do-while¹®
//int main(void) {
//	int i = 0;
//	int sum = 0;
//
//	do
//	{
//		i++;
//		sum = sum + i;
//	} while (i < 100);
//
//	cout << sum << endl;
//
//	return 0;
//}

//for¹®
int main(void) {
	int sum = 0;

	for (int i = 0; i <=100; i++)
	{
		sum = sum + i;
	}

	cout << sum << endl;

	return 0;
}