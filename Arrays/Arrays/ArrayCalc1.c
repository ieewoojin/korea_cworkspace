#include <stdio.h>
int main()
{
	/*
		크기가 10인 정수형 배열 선언
		1~10까지 저장하고, 합계를 계산
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
	printf("1부터 10까지의 합계: %d\n", total);




	return 0;
}