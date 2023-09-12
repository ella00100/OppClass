#include <iostream>

using namespace std;


int main(void) {
	short year = 0;
	int sale = 0;
	long total_sale = 0;

	year = 10;
	sale = 200000000;
	total_sale = year * sale;

	cout << "total_sale = " << total_sale  << endl;

	cout << "size for short type " << sizeof(short) << " byte" << endl;
	cout << "size for int type " << sizeof(int) << "byte" << endl;
	cout << "size for long type " <<  sizeof(long) << "byte" << endl;

	return 0;


}