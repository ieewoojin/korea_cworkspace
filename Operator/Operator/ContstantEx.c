#include <stdio.h>
#define PI 3.1415

// ���(constant) -���� �� �� ���� ��
// 1. ��ũ�� ���
// 2. const �ڷ��� 

int main() {
	const int MIN_NUM = 1;
	const int MAX_NUM = 100;
	

	// MIN_NUM = 0; -> ����( �� ���� �Ұ�)

	printf("%d\n", MIN_NUM);
	printf("%d\n", MAX_NUM);

	//���� ���� ���ϱ�
	int radius = 10;
	//const PI = 3.1415;
	double area = PI * radius * radius;
	printf("���� ����:%.2f\n", area);
	return 0;
}