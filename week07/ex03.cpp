#include <iomanip>
#include <iostream>
using namespace std;

#define STUDENTS 5

int main() {
	int grade[STUDENTS];
	int sum = 0;
	int i, average;
	
	for (i = 0; i < STUDENTS; i++) {
		cout << "enter the scores: ";
		cin >> grade[i];
	}

	for (i = 0; i < STUDENTS; i++)
		sum += grade[i];

	average = sum / STUDENTS;
	cout << "average score= " << average << endl;

	return 0;
}