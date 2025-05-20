#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strcpy, strlen, strcmp
/*
	문자열 복사 - strcpy()
	문자열 개수 - strlen()
	문자열 비교 - strcmp()

*/


int main()
{
	char msg1[] = "Gook Luck";
	char msg2[20]; 
	char msg3[20];

	printf("%d\n", strlen(msg1)); //문자열의 개수
	printf("%d\n", sizeof(msg1)); //메모리의 크기 \0 포함

	//문자열 복사
	strcpy(msg2, msg1);

	printf("%s\n", msg2);

	strcpy(msg3, "Have a good time!");
	printf("%s\n", msg3);

	//문자열 비교
	char greet1[] = "helo";
	char greet2[] = "hello";
	int result;

	result = strcmp(greet1,greet2);
	printf("%d\n", result); //같으면 0, 다르면 1

	if (result == 0) {
		printf("일치");
	}
	else
		printf("불일치");


	return 0;
}

