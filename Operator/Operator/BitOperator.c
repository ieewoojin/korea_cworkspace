#include <stdio.h>

//비트 연산자 - 비트 논리

int main() {

	int num1 = 5;    //00000101
	int num2 = 10;   //00001010
	int result;

	result = num1 & num2;  //모두 1일 때만 1
	printf("result = %d\n", result); // 둘다 1 아니어서 0출력


	result = num1 | num2;
	printf("result = %d\n", result); // 00001111
	printf("\n");

	//비트 연산자 - 비트 이동

	int num3 = 2; //00000010
	int val1, val2, val3;

	val1 = (num3 << 2);
	printf("val1 = %d\n", val1); //00001000

	val2 = (num3 << 1);
	printf("val2 = %d\n", val2); //00000100

	val3 = (num3 >> 1);
	printf("val3 = %d\n", val3); //00000010

	
	return 0;
}