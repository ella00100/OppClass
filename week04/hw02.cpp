#include <iostream>
using namespace std;

int main(void) {
	int temp;

	for (int count=0 ; count < 4 ; count++) {
		cout << "Enter any number: ";
		cin >> temp;

		if (temp <= 20)
			cout << "Oooooohhhhh! Damn cool!" << endl;
		else if (temp <= 30)
			cout << "Rain rain here again!" << endl;
		else if (temp <= 40)
			cout << "Wish I am on Everest" << endl;
		else
			cout << "Good old nagpur weather" << endl;
		
		cout << endl;
	}
	
	return 0;
}