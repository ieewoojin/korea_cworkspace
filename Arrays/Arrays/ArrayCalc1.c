#include <stdio.h>
int main()
{
	/*
		ũ�Ⱑ 10�� ������ �迭 ����
		1~10���� �����ϰ�, �հ踦 ���
	*/

	int arr[10];
	int total=0;

	for (int i = 0; i < 10;i++)
	{
		arr[i] = i + 1;
		//printf("%d ", arr[i]);
		total += arr[i];
		printf("a[%d]=%d,total=%d\n",i,arr[i],total);
		
	}
	printf("\n");
	printf("1���� 10������ �հ�: %d\n", total);




	return 0;
}