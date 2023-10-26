#include <iostream>
using namespace std;
#include <iomanip>

#define SIZE 20

void fill(int arr[][SIZE]);
void show(int arr[][SIZE]);
void sum_row(int arr[][SIZE]);
void sum_col(int arr[][SIZE]);
void sum_diagonal(int arr[][SIZE]);
void sum_backward_diagonal(int arr[][SIZE]);
void each_row_max(int arr[][SIZE]);
void each_col_max(int arr[][SIZE]);
void max_row(int arr[][SIZE]);
void max_col(int arr[][SIZE]);



int main() {
	int t_array[SIZE][SIZE];
	fill(t_array);
	show(t_array);
	sum_row(t_array);
	sum_col(t_array);
	sum_diagonal(t_array);
	sum_backward_diagonal(t_array);

	each_row_max(t_array);
	each_col_max(t_array);
	max_row(t_array);
	max_col(t_array);
}

void fill(int arr[][SIZE]) {
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++) {
			arr[i][j] = rand() % 100;
		}
}

void show(int arr[][SIZE]) {
	cout << "=====current array======" << endl;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void sum_row(int arr[][SIZE]) {
	int sum_row_list[SIZE] = { 0 };
	cout << "=====sum of row=====" << endl;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			sum_row_list[i] += arr[i][j];
		cout << "row " << i << " : " << sum_row_list[i] << endl;
	} 
	cout << endl;
}

void sum_col(int arr[][SIZE]) {
	int sum_col_list[SIZE] = { 0 };
	cout << "=====sum of col=====" << endl;
	for (int i = 0; i < SIZE; i++)
		cout <<  " co1" << setw(2) << i;
	cout << endl;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
		{
			sum_col_list[i] += arr[j][i];
		}
		cout << setw(6) << sum_col_list[i];
	}
	cout << "\n" << endl;
}

void sum_diagonal(int arr[][SIZE]) {
	int diagonal_elements[SIZE] = { 0 };
	int diagonal_sum = 0;
	cout << "=====diagonal sum=====" << endl;
	for (int i = 0; i < SIZE; i++) {
		diagonal_elements[i] = arr[i][i];
		diagonal_sum += diagonal_elements[i];
	}
	cout << diagonal_sum << "\n" << endl;
}

void sum_backward_diagonal(int arr[][SIZE]) {
	int back_dia_elements[SIZE] = { 0 };
	int back_dia_sum = 0;
	cout << "=====backward diagonal sum=====" << endl;
	for (int i = 0; i < SIZE; i++) {
		back_dia_elements[i] = arr[i][SIZE-i];
		back_dia_sum += back_dia_elements[i];
	}
	cout << back_dia_sum << "\n" << endl;
}


void each_row_max(int arr[][SIZE]) {
	int r_max_list[SIZE] = { 0 };
	cout << "=====each row max=====" << endl;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (r_max_list[i] <= arr[i][j])
				r_max_list[i] = arr[i][j];
		}
		cout << "row " << i << " : " << r_max_list[i] << endl;
	}
	cout << endl;
}

void each_col_max(int arr[][SIZE]) {
	int c_max_list[SIZE] = { 0 };
	cout << "=====each col max=====" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << " co1" << setw(2) << i;
	cout << endl;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (c_max_list[i] <= arr[j][i])
				c_max_list[i] = arr[j][i];
		}
		cout << setw(6) << c_max_list[i];
	}
	cout << "\n" << endl;
}



void max_row(int arr[][SIZE]) {
	int sum_row_max = 0;
	int idx = 0;
	int sum_row_list[SIZE] = { 0 };
	cout << "=====max row=====" << endl;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			sum_row_list[i] += arr[i][j];
		}
		if (sum_row_max <= sum_row_list[i]) {
			sum_row_max = sum_row_list[i];
			idx = i;
		}
	}
	cout << idx << endl;
}


void max_col(int arr[][SIZE]) {
	int sum_col_max = 0;
	int idx = 0;
	int sum_col_list[SIZE] = { 0 };
	cout << "======max col=====" << endl;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
		{
			sum_col_list[i] += arr[j][i];
		}
		if (sum_col_max <= sum_col_list[i]) {
			sum_col_max = sum_col_list[i];
			idx = i;
		}
	}
	cout << idx << endl;
}