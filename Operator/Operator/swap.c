#include <stdio.h>
	// ���� �� ��ȯ�ϱ�
int main() {
	int x = 1;
	int y = 2;
	int temp;
	printf("=====��ȯ ��=====\n");
	printf("x = %d, y =%d\n", x, y);
	
	temp = x;
	x = y;
	y = temp;
	printf("\n");
	printf("=====��ȯ ��=====\n");
	printf("x = %d, y =%d\n", x, y);
	printf("\n");

	//���� ���� ������(���+����)
	int value = 10;
	value +=3; //value=value+3;
	printf("%d\n", value);

	value -= 3;
	printf("%d\n", value);
	
	value *= 3;
	printf("%d\n", value);

	value /= 3;
	printf("%d\n", value);

	value %= 3;
	printf("%d\n", value);

	

	return 0;
}
