#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strcpy, strlen, strcmp
/*
	���ڿ� ���� - strcpy()
	���ڿ� ���� - strlen()
	���ڿ� �� - strcmp()

*/


int main()
{
	char msg1[] = "Gook Luck";
	char msg2[20]; 
	char msg3[20];

	printf("%d\n", strlen(msg1)); //���ڿ��� ����
	printf("%d\n", sizeof(msg1)); //�޸��� ũ�� \0 ����

	//���ڿ� ����
	strcpy(msg2, msg1);

	printf("%s\n", msg2);

	strcpy(msg3, "Have a good time!");
	printf("%s\n", msg3);

	//���ڿ� ��
	char greet1[] = "helo";
	char greet2[] = "hello";
	int result;

	result = strcmp(greet1,greet2);
	printf("%d\n", result); //������ 0, �ٸ��� 1

	if (result == 0) {
		printf("��ġ");
	}
	else
		printf("����ġ");


	return 0;
}

