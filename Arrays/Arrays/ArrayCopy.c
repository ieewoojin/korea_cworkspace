#include <stdio.h>
int main()
{
	//�迭�� ����
	char a1[] = "NET"; //���ڿ��� ������ �迭 arr1�� ����
	char a2[4]; //������ �迭 arr2 ����
	int i;
	
	//printf("%d\n", sizeof(a1)); // '\0'�ֱ� ������ 4�� ����

	////������ ���� ���
	//printf("%c\n", a1[0]);
	//printf("%c\n", a1[1]);
	//printf("%c\n", a1[3]); //null ����
	//printf("%c\n", a1[2]);

	//a1�� a2�� ����
	int size = sizeof(a1) / sizeof(a1[0]);
	for ( i = 0; i < size; i++)
	{
		a2[i] = a1[i];
	}
	for (i = 0; i < size; i++)
	{
		printf("%c", a2[i]);
	}
	
	printf("\n");

	printf("%s\n", a2);


	//a1�� a2�� �Ųٷ� ���� -> a2[0] =a1[2]
	for (i = 0; i < size; i++)
	{
		a2[i] = a1[2 - i];
	}
	a2[3] = '\0';
	printf("%s\n", a2);

	return 0;
}