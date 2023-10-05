#include <iostream> // include iostream header file
using namespace std; // std namespae 사용

int N = 1000; // global 변수 int N
int cal_sum(); // cal_sum() 함수 선언

int main() { // main 함수 정의
	int sum; // 지역변수 sum 초기화
	sum = cal_sum(); //sum에 cal_sum() 반환 값 할당;
	{
		int k; // 지역변수 int k 선언
		k = 9; // k에 9할당
		cout << "k = " << k << endl; // k 값 출력
	}
	cout << "sum of first " << N << " nanural numbers is " << sum << endl;
	// N값과 sum값 출력
	return 0;
}

int cal_sum() { // cal_sum()함수 정의
	int i, s = 0; // 지역변수 i, s 초기화
	for (i = 0; i <= N; i++) { // 0~1000까지 1씩 증가하며 반복
		s = s + i; // s 값에 i 값을 반복해서 더함
	}
	return(s); // 최종 s값(0~N까지의 합)을 반환
}
