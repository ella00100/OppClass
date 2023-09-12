#include <iostream>

using namespace std;

int main(void)
{
	char grade = 'A';
	short weight = 78;
	long salary = 2000000;
	int distance1 = 149600000;
	long long price_of_apt = 2200000000;
	float height = 178.9;
	double distance2 = 2e19;
	double distance3 = 3e19;

	cout << "grade=" << int(grade) << endl;
	cout << "weight=" << weight << "kg" << endl;
	cout << "salary=" << salary << "¿ø" << endl;
	cout << "distance1=" << distance1 << "km" << endl;
	cout << "price 0f apt=" << price_of_apt << "¿ø" <<  endl;
	cout << "height=" << height << "cm" << endl;
	cout << "distance2=" << distance2 << "km" << endl;
	cout << "distance3=" << distance3 << "km" << endl;



	return 0;
}