#include <iostream>
using namespace std;

int get_max2(int x, int y);
int get_max3(int x, int y, int z);

int main(void) {
	int max1, max2;
	int x = 2, y = 5, z = -2;
	max1 = get_max2(x, z);
	max2 = get_max3(x, y, z);

	cout << "the maximun value is " << max1 << endl;
	cout << "the maximun value is " << max2 << endl;

	return 0;
}

int get_max2(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int get_max3(int x, int y, int z) {
	int values[] = { x, y, z };
	int max = x;
	for (int i = 1; i < 3; i++) {
		if (max < values[i])
			max = values[i];
	}
	return max;
}
