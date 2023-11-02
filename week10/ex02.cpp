#include <iostream>
using namespace std;


struct student {
	int korean;
	int english;
	int math;
};

void main() {
	student x, y;
	x.korean = 80;
	x.english = 90;
	x.math = 70;
	cout << x.korean << " " << x.english << " " << x.math << endl;
	cin >> y.korean >> y.english >> y.math;
	cout << y.korean << " " << y.english << " " <<  y.math << endl;
}