#include <stdio.h>

// 조건 연산자 - (조건식) ? 참: 거짓


int main() {
	int value;
	value = 3 > 4 ? 10 : 20;
	printf("%d\n", value);

	int dadAge = 44;
	int momAge = 46;
	char result;

	result = (dadAge > momAge) ? 'T':'F';
	printf("%c\n", result);

	// 절대값 계산

	int x = -5;
	int result2;
	result2 = (x > 0) ? -x : x;
	printf("%d\n", result2);


	return 0;

}