#include <stdio.h>
#include <time.h> //time()
#include <Windows.h> //Sleep()

//time_t �ڷ����� ���

int main()
{
	/*time_t now;
	//long now;
	now = time(NULL); // �ð��� ��� �帧�� �ǹ�

	printf("1970/1/1/00:00:00 ���� = %ld��\n", now); //�� ����

	printf("1970/1/1/00:00:00 ���� = %ld��\n", now/(24*60*60)); //�� ȯ��
	
	printf("1970/1/1/00:00:00 ���� = %ld��\n", now / (365*24 * 60*60 )); //�� ȯ��

	//���� �ð� �����غ���
	time_t start, end;

	start = time(NULL); // ���� �ð�
	printf("���� �ð�:%d��\n", start);
	
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
		Sleep(500);
	}

	end = time(NULL); // ���� �ð�
	printf("���� �ð�:%d��\n", end);
	printf("����ð�:%ld��\n", (end - start));*/




	
	//���� ���� �ð�
	clock_t start, end;
	double elapsedTime; //�ҿ� �ð�

	start = clock();

	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
		Sleep(500);
	}
	end = clock();

	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC; //CLOCKS_PER_SEC; : �ʴ� �ð� ���
	printf("�ҿ� �ð�:%.2f��\n", elapsedTime);


	return 0;
}

