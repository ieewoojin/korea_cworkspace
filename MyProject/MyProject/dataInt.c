#include <stdio.h>
int main(void) {
	//진수 표기 10진수,2진수,16진수

	int num = 10;
	int bnum = 0b1010; //2진수는 접두어 0b를 붙임
	int hnum = 0xA; //16진수는 접두어 0x를 붙임

	printf("%d\n", num); 
	printf("%d\n", bnum);
	printf("%d\n", hnum);

	//음의 정수 표기
	int num1 = 0b00000000000000000000000000000101; //5 
	int num2 = 0b11111111111111111111111111111011;  //5의 보수 -5
		printf("%d %d\n", num1, num2);
		
	return 0;
}