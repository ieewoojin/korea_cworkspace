#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//���� ���� ���� -> ��ǻ�Ͱ� ���� ���� -> ����ڰ� ������ ���� �Է� -> 1. ����, 2. ������ �� > ����, 3. ������ �� < ����
int main()
{
	srand(time(NULL));
	int randNum; //��ǻ�Ͱ� ������ ����
	int guessNum=0; //����ڰ� ������ ��
	int count=5; // ���� �õ��� Ƚ��
	
	randNum = rand() % 50 + 1; //1~50������ ���� ����
	//printf("��ǻ���� ��: %d\n", randNum);

	while (1) {  //���� �ݺ�
		printf("���� Ƚ�� %d��\n", count--);

		printf("���ڸ� ���߼���(1~50 �Է�): ");
		scanf_s("%d", &guessNum);


		if (guessNum == randNum)
		{
			printf("�����Դϴ�!\n");
			printf("��ǻ���� ��:%d", randNum);
			break;
		}
		else if (guessNum > randNum)
		{
			printf("�ʹ� ���ڰ� Ů�ϴ�!\n");
		}
		else
		{
			printf("�ʹ� ���ڰ� �۽��ϴ�!\n");
		}
		

		if (count == 0) {
			printf("���� Ƚ���� 0�Դϴ�. �ƽ��� ���� �߽��ϴ�.\n");
			printf("��ǻ���� ���� :%d�̾����ϴ�!", randNum);
			break;
		}

	}
	


	return 0;
}