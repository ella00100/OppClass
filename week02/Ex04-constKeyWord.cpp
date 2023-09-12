#include <iostream>

using namespace std;

int main(void)
{
	const double TAX_RATE = 0.15;
	double income, salary;

	cout << "insert your salary: ";
	cin >> salary;

	income = salary - TAX_RATE * salary;
	cout << "net income : " << income << endl;

	TAX_RATE = 0.20;
	income = salary - TAX_RATE * salary;
	cout << "net income : " << income << endl;

	return 0;

}
