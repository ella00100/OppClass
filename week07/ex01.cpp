#include<iomanip>
#include <iostream>
using namespace std;

int main(void) {
	int grade[10];
	int i;
	for (i = 0; i < 10; i++) {
		grade[i] = 0;
	}
	cout << "====================\n";
	cout << "   INDEX   VALUE\n";
	cout << "====================\n";
	for (i = 0; i < 10; i++) {
		cout << setw(6) << i << setw(8) << grade[i] << endl;;
	}
	return 0;
}
