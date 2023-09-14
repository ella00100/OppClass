#include <iostream>
using namespace std;

#include <iomanip>

int main(void)
{
	for (int i = 0; i < 8; i++) {
		for (int j = 65; j < 72 - i; j++) {
			cout <<  char(j) << " ";
		}
		for (int k = 0; k < i; k++) {
			cout << "    ";
		}

		for (int j = 71-i; j >= 65; j--) {
			cout << char(j) << " ";

		}
		cout << endl;
	}
	
}