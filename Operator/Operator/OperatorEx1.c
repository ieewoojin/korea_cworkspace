#include <stdio.h>

int main() {

	int a = 99;
	int b = 2;

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%.1f\n", (double)a / b); //���� ����ȯ
	printf("%d\n", a % b);

	//���� ������
	printf("a++�� ����:%d\n", a++); //��ġ ����
	printf("a�� ����:%d\n", a);

	printf("++a�� ����:%d\n", ++a); //��ġ ����
	printf("a�� ����:%d\n",  a);

	printf("a--�� ����:%d\n", a--);
	printf("a�� ����:%d\n", a);
	
	printf("--a�� ����:%d\n", --a);
	printf("a�� ����:%d\n", a);

	

	


	return 0;
}