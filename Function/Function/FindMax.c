#include <stdio.h>

//�ִ밪�� ����ϴ� �Լ� ����
int findMax(int arr[], int len)
{
	int maxValue = arr[0];
	for (int i = 1; i < len;i++)
	{
		if (maxValue < arr[i])
			maxValue = arr[i];
	}
	return maxValue;
}

int main()
{
	int a[] = { 21,35,45,42,44 };

	//�Լ� ȣ��
	int max= findMax(a,6);

	printf("�ִ밪: %d\n", max);
	return 0;
}

