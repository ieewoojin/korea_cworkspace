#include <stdio.h>
int main() {

	int money= 500;
	int coffee = 5;

	while (1) //���� �ݺ�
	{
		printf("������ �־��ּ���: ");
		scanf_s("%d", &money);

		if (money == 500)
		{
			printf("Ŀ�� ���ɴϴ�.\n");
			coffee--;
		}

		else if (money > 500)
		{
			printf("Ŀ�ǰ� ������ �Ž����� %d���� ���ɴϴ�.\n", (money - 500));
			coffee--;
		}

		else
			printf("Ŀ�ǰ� �� ������ ���� ���� ��ȯ�˴ϴ�.\n");

		if (coffee == 0) 
		{
			printf("Ŀ�ǰ� �����Ǿ����ϴ�. �ǸŸ� �ߴ��մϴ�.\n");

			break;
		}
		
	}

	printf("\n=====���α׷� ����=====\n");

	return 0;
}