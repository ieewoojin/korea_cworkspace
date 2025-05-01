#include <stdio.h>

//최대값을 계산하는 함수 정의
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

	//함수 호출
	int max= findMax(a,6);

	printf("최대값: %d\n", max);
	return 0;
}

