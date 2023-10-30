#include <iostream>
using namespace std;

#define SIZE 11

double sum_multi_xy(double arr_x[], double arr_y[]);
double  multi_each_sum(double  arr_x[], double  arr_y[]);
double  sum_square(double  arr[]);
double  square_sum(double  arr[]);

int main(void) {
	double  r;
	double  sum_multi_val;
	double  multi_each_sum_val;
	double  sum_square_x, sum_square_y;
	double  square_sum_x, square_sum_y;

	double  x[SIZE] = { 34.22, 39.87, 41.85, 43.23, 40.06,
	53.29, 53.29, 54.14, 49.12, 40.71, 55.15 };

	double  y[SIZE] = { 102.43, 100.93, 97.43, 97.81, 98.32,
	98.32, 100.07, 97.08, 91.59, 94.85, 94.65 };

	sum_multi_val = sum_multi_xy(x, y);
	multi_each_sum_val = multi_each_sum(x, y);
	sum_square_x = sum_square(x);
	cout << "sigma (x^2) : " << sum_square_x << endl;
	sum_square_y = sum_square(y);
	cout << "sigma (y^2) : " << sum_square_y << endl;
	square_sum_x = square_sum(x);
	cout << "(sigma x)^2 : " << square_sum_x << endl;
	square_sum_y = square_sum(y);
	cout << "(sigma y)^2 : " << square_sum_y << endl;


	r = (SIZE * sum_multi_val - multi_each_sum_val) /
		sqrt((SIZE * sum_square_x - square_sum_x) * (SIZE * sum_square_y - square_sum_y));

	cout << "correlation coefficient r : " << r << endl;
	return 0;
}

double  sum_multi_xy(double  arr_x[], double  arr_y[]) {
	double  multi_xy_list[SIZE];
	double  sum = 0;
	for (int i = 0; i < SIZE; i++) {
		multi_xy_list[i] = arr_x[i] * arr_y[i];
		sum += multi_xy_list[i];
	}
	cout << "sigma xy : " << sum << endl;
	return sum;
}

double  multi_each_sum(double  arr_x[], double  arr_y[]) {
	double  sum_x = 0, sum_y = 0;
	double  multi_sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum_x += arr_x[i];
		sum_y += arr_y[i];
	}
	multi_sum = sum_x * sum_y;
	cout << "sigma x * sigma y : " << multi_sum << endl;
	return multi_sum;
}

double  sum_square(double  arr[]) {
	double  square_list[SIZE] = { 0 };
	double  sum_squ = 0;
	for (int i = 0; i < SIZE; i++) {
		square_list[i] = arr[i] * arr[i];
		sum_squ += square_list[i];
	}
	return sum_squ;
}

double  square_sum(double  arr[]) {
	double  sum = 0;
	double  squ_sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum += arr[i];
	}
	squ_sum = sum * sum;
	return squ_sum;
}