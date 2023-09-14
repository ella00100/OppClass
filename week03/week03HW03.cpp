#include <iostream>
using namespace std;

int main(void) {
	int s1 = 0;
	int s2 = 0;

	for (int i = 1; i <= 30; i++) {
		s1 = s1 + ((i * i) + 1);

		if (i >= 10) {
			for (int j = 0; j <= 5; j++) {
				s2 = s2 + ((i * j));
			}
		}
	}
	cout << "s1=" << s1 << endl;
	cout << "s2=" << s2 << endl;
	return 0;
}