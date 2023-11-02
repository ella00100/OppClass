#include <iostream>
using namespace std;

union example {
	int i;
	char c;
};

int main() {
	union example v;
	v.i = 100;
	cout << "v.c: " << v.c << " v.i: " << v.i << endl;
	v.c = 'A';
	cout << "v.c: " << v.c << " v.i: " << v.i << endl;
	return 0;
}
