#include <stdio.h>
int main(void) {
	//���� ǥ�� 10����,2����,16����

	int num = 10;
	int bnum = 0b1010; //2������ ���ξ� 0b�� ����
	int hnum = 0xA; //16������ ���ξ� 0x�� ����

	printf("%d\n", num); 
	printf("%d\n", bnum);
	printf("%d\n", hnum);

	//���� ���� ǥ��
	int num1 = 0b00000000000000000000000000000101; //5 
	int num2 = 0b11111111111111111111111111111011;  //5�� ���� -5
		printf("%d %d\n", num1, num2);
		
	return 0;
}