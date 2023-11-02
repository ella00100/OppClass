#include <iostream>
using namespace std;

#define SIZE 3

struct student {
	int number;
	char name[20];
	double height;
};

int main() {
	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		cout << "Enter the student ID: ";
		cin >> list[i].number;
		cout << "Enter the name: ";
		cin >> list[i].name;
		cout << "Enter the height(floating point): ";
		cin >> list[i].height;
	}

	for (i = 0; i < SIZE; i++) {
		cout << "SID: " << list[i].number << " Name: " << list[i].name << " Height: " << list[i].height << endl;
	}
	return 0;
}