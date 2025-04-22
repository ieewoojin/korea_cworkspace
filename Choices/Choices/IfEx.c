#include <stdio.h>


int main() {
	
	/*
		if문
		나이가 15세 이상이면 "관람가" 출력하는 프로그램
	*/

	int age = 23;

	if (age >= 15) {
		printf("관람 가능\n");
	}
	else
		printf("관람 불가능\n");

	printf("나이는 %d살입니다.\n",age);

	return 0;
}