#include <iostream> // include iostream header file
using namespace std; // std namespae ���

int N = 1000; // global ���� int N
int cal_sum(); // cal_sum() �Լ� ����

int main() { // main �Լ� ����
	int sum; // �������� sum �ʱ�ȭ
	sum = cal_sum(); //sum�� cal_sum() ��ȯ �� �Ҵ�;
	{
		int k; // �������� int k ����
		k = 9; // k�� 9�Ҵ�
		cout << "k = " << k << endl; // k �� ���
	}
	cout << "sum of first " << N << " nanural numbers is " << sum << endl;
	// N���� sum�� ���
	return 0;
}

int cal_sum() { // cal_sum()�Լ� ����
	int i, s = 0; // �������� i, s �ʱ�ȭ
	for (i = 0; i <= N; i++) { // 0~1000���� 1�� �����ϸ� �ݺ�
		s = s + i; // s ���� i ���� �ݺ��ؼ� ����
	}
	return(s); // ���� s��(0~N������ ��)�� ��ȯ
}
