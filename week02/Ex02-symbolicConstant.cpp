#include <iostream>
using namespace std;

#define PI 3.141592

int main(void) {
	float radius, area, circumference;

	cout << "insert the radius: ";
	cin >> radius;

	area = PI * radius * radius;
	circumference = 2.0 * PI * radius;

	cout << "radius = " << radius << endl;
	cout << "circle area =" << area << ", circumference =" << circumference << endl;

	return 0;

}
