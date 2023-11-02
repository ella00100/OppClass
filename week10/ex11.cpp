#include <iostream>
using namespace std;

union test {
	int a;
	double b;
	char name[9];
};

struct test1 {
	double a;
	char b;
	short c;
	int d;
};

struct test2 {
	char a;
	double b;
	short c;
	int d;
};

void main() {
	test i = { 0 };
	test1 t1 = { 0 };
	test2 t2 = { 0 };
	cout << sizeof(i) << " " << sizeof(t1) << " " << sizeof(t2) << endl;
}