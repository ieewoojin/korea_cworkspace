#include <stdio.h>
/*�ڷ����� ����*/

int main(void) {

	printf("===== char �ڷ��� =====\n");
	char ch = 'A';
	printf("%c %d\n", ch, ch);

	char a = -128;
	printf("%d\n", a);
	char b = 128;  //overflow
	printf("%d\n", b);

	unsigned char c = 128;  //unsigned ��ȣ�� ���� 
	printf("%d\n", c);

	/*int �� 4����Ʈ = 32��Ʈ */
	printf("===== int �ڷ��� =====\n");
	int iNum1 = 2100000000;
	printf("%d\n", iNum1);
	int iNum2 = 2200000000; //overflow
	printf("%d\n", iNum2);
	long long llNum= 2200000000L;  //long���� ���� �ڿ� 'L' OR 'l' ����
	printf("%lld\n", llNum);


	// float 4����Ʈ(�ڿ� 'F' or 'f'����), double 8����Ʈ(ǥ��)
	printf("===== float, double �ڷ��� =====\n");
	float fNum = 0.1234567F; //�Ҽ� 6��° �ڸ� ���� ǥ�� ����
	printf("%f\n", fNum);

	double dNum = 0.123456789012345; //�Ҽ� 15��° �ڸ� ���� ǥ�� ����
	printf("%.15lf\n", dNum); 






	return 0;
}