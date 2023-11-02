#include <iostream>
using namespace std;

#include <string.h>
#include <stdlib.h>

struct student {
	int number;
	char name[10];
	double height;
};

int main() {
	struct student s;
	s.number = 22072174;
	strcpy_s (s.name, "name");
	s.height = 170.2;

	cout << "sid: " << s.number << endl;
	cout << "name: " << s.name << endl;
	cout << "height: " << s.height << endl;

	return 0;
}