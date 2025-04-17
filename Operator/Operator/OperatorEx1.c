#include <stdio.h>

int main() {

	int a = 99;
	int b = 2;

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%.1f\n", (double)a / b); //강제 형변환
	printf("%d\n", a % b);

	//증감 연산자
	printf("a++의 값은:%d\n", a++); //후치 연산
	printf("a의 값은:%d\n", a);

	printf("++a의 값은:%d\n", ++a); //전치 연산
	printf("a의 값은:%d\n",  a);

	printf("a--의 값은:%d\n", a--);
	printf("a의 값은:%d\n", a);
	
	printf("--a의 값은:%d\n", --a);
	printf("a의 값은:%d\n", a);

	

	


	return 0;
}