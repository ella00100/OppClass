#include <iostream>
using namespace std;

void draw_rect(int side);

int main() {
	int side = 5;
	draw_rect(side);

	return 0;
}

void draw_rect(int side) {
	int x, y;
	for (y = 0; y < side; y++) {
		for (x = 0; x < side; x++) {
			cout << ("*");
		}
		cout << "\n";
	}
	return;
}