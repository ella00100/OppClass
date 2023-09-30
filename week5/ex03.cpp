#include <iostream>
using namespace std;

int absolute(int x);

int main() 
{
	int x;
	cout << "숫자를 입력하세요 : ";
	cin >> x;

	cout << "absolute(" << x << ") = " << absolute(x) << endl;
	return 0;
}

int absolute(int x)
{
	if (x > 0)
		return x;
	else
		return -x;
}