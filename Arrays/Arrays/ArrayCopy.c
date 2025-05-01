#include <stdio.h>
int main()
{
	//배열의 복사
	char a1[] = "NET"; //문자열을 저장한 배열 arr1을 선언
	char a2[4]; //복사할 배열 arr2 선언
	int i;
	
	//printf("%d\n", sizeof(a1)); // '\0'있기 때문에 4가 나옴

	////각각의 문자 출력
	//printf("%c\n", a1[0]);
	//printf("%c\n", a1[1]);
	//printf("%c\n", a1[3]); //null 문자
	//printf("%c\n", a1[2]);

	//a1을 a2에 복사
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


	//a1을 a2에 거꾸로 복사 -> a2[0] =a1[2]
	for (i = 0; i < size; i++)
	{
		a2[i] = a1[2 - i];
	}
	a2[3] = '\0';
	printf("%s\n", a2);

	return 0;
}