#include <stdio.h>
int main()
{
	//������ ����, �հ�, ���, �ִ�, �ּ�
	int score[5] = { 85,75,90,70,80 };
	int sum = 0;
	double avg;
	int min, max;


	//�迭�� ũ��(����)
	int count = sizeof(score) / sizeof(score[0]);  
	printf("�迭�� ũ��: %d\n", count);

	//������ �հ�
	for (int i = 0; i < count;i++)
	{
		sum += score[i];
	}
	printf("������ �հ�: %d\n", sum);

	//������ ���
	avg = (double)sum / count; //���� ����ȯ �������.
	printf("������ ���: %.1lf\n", avg);

	//������ �ּҰ�
	min = score[0]; //�迭�� ù��° ���� ���Ƿ� ������.
	for (int i = 0; i < count; i++)
	{
		if (score[i] < min)
			min = score[i];
	}


	printf("������ �ּҰ�: %d\n", min);

	//������ �ִ밪
	max = score[0]; //�迭�� ù��° ���� ���Ƿ� ������.
	for (int i = 0; i < count; i++)
	{
		if (score[i] > max)
			max = score[i];
	}
	printf("������ �ִ밪: %d\n", max);


	return 0;
}