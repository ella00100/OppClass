#include <iostream>
using namespace std;

int main(void) {

	char temp;
	char result;
	while (1) {
		cout << "Enter Uppercase : ";
		cin >> temp;

		if (temp == '/')
			break;

		else if (temp >= 65 && temp <= 90) {
			result = char(int(temp) + 32);
			cout << "The lowercase is " << result << endl;
		}
		else {
			result = temp;
			cout << temp << " is not uppercase" << endl;
		}
		cout << endl;
	}

	return 0;
}