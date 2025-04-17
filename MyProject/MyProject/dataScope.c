#include <stdio.h>
/*자료형의 범위*/

int main(void) {

	printf("===== char 자료형 =====\n");
	char ch = 'A';
	printf("%c %d\n", ch, ch);

	char a = -128;
	printf("%d\n", a);
	char b = 128;  //overflow
	printf("%d\n", b);

	unsigned char c = 128;  //unsigned 부호가 없음 
	printf("%d\n", c);

	/*int 형 4바이트 = 32비트 */
	printf("===== int 자료형 =====\n");
	int iNum1 = 2100000000;
	printf("%d\n", iNum1);
	int iNum2 = 2200000000; //overflow
	printf("%d\n", iNum2);
	long long llNum= 2200000000L;  //long형은 숫자 뒤에 'L' OR 'l' 넣음
	printf("%lld\n", llNum);


	// float 4바이트(뒤에 'F' or 'f'붙임), double 8바이트(표준)
	printf("===== float, double 자료형 =====\n");
	float fNum = 0.1234567F; //소수 6번째 자리 까지 표기 가능
	printf("%f\n", fNum);

	double dNum = 0.123456789012345; //소수 15번째 자리 까지 표기 가능
	printf("%.15lf\n", dNum); 






	return 0;
}