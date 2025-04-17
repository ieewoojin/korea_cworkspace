#include <stdio.h>

int main() {

	//비교 연산자 1-참, 0-거짓

	int a = 5, b = 3, c = 2;

	printf("(a > b)= %d\n", a > b);
	printf("(a < b)= %d\n", a < b);
	printf("(a >= b)= %d\n", a >= b);
	printf("(a <= b)= %d\n", a <= b);
	printf("(a == b)= %d\n", a == b);
	printf("(a != b)= %d\n", a != b);

	//논리 연산자 (비교 연산이 2개 이상인 경우)

	printf("(a < b) && (b < c)= %d\n", (a < b) && (b < c));
	printf("(a < b) || (c < b)= %d\n", (a < b) || (c < b));
	printf("!(a < b)= %d\n", !(a < b) );
	printf("!(a >= b)= %d\n", !(a >= b));
	return 0;
}