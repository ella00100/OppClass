#include <iostream>
using namespace std;

int main(void)
{
	int s[6][3][5] = { 0 };
	int x, y, z;
	int i = 1;

	for (z = 0; z < 6; z++) {
		for (y = 0; y <3; y++) {
			for (x = 0; x < 5; x++) {
				s[z][y][x] = i++;
				cout << s[z][y][x] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}