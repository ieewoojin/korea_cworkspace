#include <stdio.h>

/*���尴 ���� ���� �¼��� �� �� ����ϴ� ���α׷�*/

int main() {
	
	int customer; //���尴
	int column; //��
	int row; //��
	printf("���尴 �� �Է�: ");
	scanf_s("%d", &customer);

	printf("�¼� ���� ���� �Է�: ");
	scanf_s("%d", &column);

	
	if (customer % column == 0)
	{
		row = customer / column;
	}
	else
		row = customer / column + 1;
	printf("%d���� ���� �ʿ��մϴ�.\n", row);



	return 0;
}
