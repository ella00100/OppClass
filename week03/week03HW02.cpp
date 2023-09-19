#include <iostream>
using namespace std;

int main(void)
{
	for (int i = 0; i < 8; i++) { 
		for (int j = 65; j < 72 - i; j++) {
			cout <<  char(j) << " ";
		}

		for (int k = 1; k < i*2; k++) {
			cout << "  ";
		}

		if (i == 0) {
			for (int j = 70 - i; j >= 65 ; j--) {
				cout << char(j) << " ";
			}
		} else{
			
			for (int j = 71 - i; j >= 65; j--) {
				cout << char(j) << " ";

			}
		}
	
		cout << endl;
	}
	
}