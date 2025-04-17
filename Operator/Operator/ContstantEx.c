#include <stdio.h>
#define PI 3.1415

// 상수(constant) -변경 될 수 없는 값
// 1. 매크로 상수
// 2. const 자료형 

int main() {
	const int MIN_NUM = 1;
	const int MAX_NUM = 100;
	

	// MIN_NUM = 0; -> 오류( 값 변경 불가)

	printf("%d\n", MIN_NUM);
	printf("%d\n", MAX_NUM);

	//원의 넓이 구하기
	int radius = 10;
	//const PI = 3.1415;
	double area = PI * radius * radius;
	printf("원의 넓이:%.2f\n", area);
	return 0;
}