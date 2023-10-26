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
	double  x_sum_square, y_sum_square;
	double  x_square_sum, y_square_sum;

	double  x[SIZE] = { 34.22, 39.87, 41.85, 43.23, 40.06,
	53.29, 53.29, 54.14, 49.12, 40.71, 55.15 };
	
	double  y[SIZE] = { 102.43, 100.93, 97.43, 97.81, 98.32,
	98.32, 100.07, 97.08, 91.59, 94.85, 94.65 };

	sum_multi_val = sum_multi_xy(x, y);
	multi_each_sum_val = multi_each_sum(x, y);
	x_sum_square = sum_square(x);
	y_sum_square = sum_square(y);
	x_square_sum = square_sum(x);
	y_square_sum = square_sum(y);


	r = (SIZE * sum_multi_val - multi_each_sum_val) /
		sqrt((SIZE * x_sum_square - x_square_sum) * (SIZE*y_sum_square - y_square_sum));

	cout << "correlation coeficient r is " << r << endl;
	return 0;
}

double  sum_multi_xy(double  arr_x[], double  arr_y[]) {
	double  multi_xy_list[SIZE];
	double  sum = 0;
	for (int i = 0; i < SIZE; i++) {
		multi_xy_list[i] = arr_x[i] * arr_y[i];
		sum += multi_xy_list[i];
	}
	return sum;
}

double  multi_each_sum(double  arr_x[], double  arr_y[]) {
	double  sum_x=0, sum_y=0;
	double  multi_sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum_x += arr_x[i];
		sum_y += arr_y[i];
	}
	multi_sum = sum_x * sum_y;
	cout << multi_sum << endl;
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