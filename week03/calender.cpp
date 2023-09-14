#include <iostream>
using namespace std;
#include <iomanip>  


#define START_DAY 5
#define DAYS_OF_MONTH 31

int main(void) {
	int day, date;
	cout << "===================================\n";
	cout << "Sun. Mon. Tue. Wen. Thu. Fri. Sat.\n";
	cout << "===================================\n";

	for (day = 1; day < START_DAY; day++) 
		cout << "      ";
	cout << " ";

	for (date = 1; date <= DAYS_OF_MONTH; date++) {
		if (day == 7) {
			day = 0;
			cout << "\n";
		}
		++day;
		cout << setw(5) << date;
	}
	cout << "\n" << "===================================" << endl;
	return 0;
}