#include <stdio.h>
/*
	switch(����){
	case: ���๮; break;
	default:���๮; break;
	}
*/


int main() {

	int floor;
	printf("���� ��������:");
	scanf_s("%d", &floor);

	switch (floor)
	{
	case 1:
		printf("1���� ����\n");
		break;
	case 2:
		printf("2���� ����\n");
		break;
	case 3:
		printf("3���� ����\n");
		break;
	default:
		printf("�ǹ��� ���� �� �Դϴ�.\n");
		break;
	}




	return 0;
}
