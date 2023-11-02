#include <iostream>
using namespace std;

union ip_address {
	unsigned long laddr;
	unsigned char saddr[4];
};

int main() {
	union ip_address addr;

	addr.saddr[0] = 1;
	addr.saddr[1] = 0;
	addr.saddr[2] = 0;
	addr.saddr[3] = 127;

	cout << hex << addr.laddr << endl;
	return 0;
}