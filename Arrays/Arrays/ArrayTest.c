#include <stdio.h>
#define MAX_LEN 4
int main()
{
	//�迭 ��� ���� �� ����
	int scores[MAX_LEN]; //�迭�� ũ��� ����� ���!
	int indexOfScores = 0; //�迭�� �ε����� ������ ���� 

	//��� �߰�(����)
	if(indexOfScores<MAX_LEN)
		scores[indexOfScores++] = 80; //scores[0]

	if (indexOfScores < MAX_LEN)
		scores[indexOfScores++] = 70; //scores[1]

	if (indexOfScores < MAX_LEN)
		scores[indexOfScores++] = 95; //scores[2]

	if (indexOfScores < MAX_LEN)
		scores[indexOfScores++] = 80; //scores[3]

	//��� ����
	if(indexOfScores>0) indexOfScores--;
	if (indexOfScores > 0) indexOfScores--;
	if (indexOfScores > 0) indexOfScores--;
	//if (indexOfScores > 0) indexOfScores--;

	//��ü ���
	//���� �� ���� ó��
	printf("���� �迭 ����\n");
	if (indexOfScores == 0)
	{
		printf("(�������)\n");
	}
	else
	{
		printf("���� ��� ��: %d\n", indexOfScores);

		for (int i = 0; i < indexOfScores; i++)
		{
			printf("%d\n", scores[i]);
		}

	}



	return 0;
}