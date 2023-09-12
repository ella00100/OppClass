#include < stdio.h>
#include <iostream>

using namespace cout;

#define PI 3.141592

int main(void) {
	float radius, area, circumference;

	printf("insert the radius");
	cout << &radius; 

	area = PI * radius * radius;
	circumference = 2.0 * PI * radius;

	printf("radius = %f.\n", radius);
	printf("circle area = %f, circumference= %f\n ", area, circumference);

	return 0;
}