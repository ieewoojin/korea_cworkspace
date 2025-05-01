#include <stdio.h>
int main()
{
	//배열의 요소 값 교환
	int a[5] = { 3,2,5,1,4 };
	int i,tmp;

	//현위치 요소와 다음 요소 교환 a[i], a[i+1]...
	
	for (i = 0; i < 4;i++) //끝 인덱스 -1 까지 교환이 실행됨
	{
		tmp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = tmp;
	}
	for (i = 0; i < 5;i++)
	{
		printf("%d ", a[i]);
	}


	return 0;
}