#include <stdio.h>

//��Ʈ ������ - ��Ʈ ��

int main() {

	int num1 = 5;    //00000101
	int num2 = 10;   //00001010
	int result;

	result = num1 & num2;  //��� 1�� ���� 1
	printf("result = %d\n", result); // �Ѵ� 1 �ƴϾ 0���


	result = num1 | num2;
	printf("result = %d\n", result); // 00001111
	printf("\n");

	//��Ʈ ������ - ��Ʈ �̵�

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