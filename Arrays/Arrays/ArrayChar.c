#include <stdio.h>
int main() {

	//�迭�� ũ�Ⱑ 6�� ������ �迭 ����
	char msg[6] = { 'h','e','l','l','o' };

	printf("%c\n", msg[4]); //Ư����� �˻�

	//��ü ���
	for (int i = 0; i < 5; i++)
	{
		printf("%c ", msg[i]);
	}
	printf("\n");

	msg[0] = 'y'; //��� ����

	msg[5] = 'w';   //��� �߰�

	for (int i = 0; i < 6; i++)
	{
		printf("%c ", msg[i]);
	}
	printf("\n");

	//�޸� �ּ� ���(������ 1����Ʈ�� ����)
	printf("%x %x %x\n", &msg[0], &msg[1], &msg[2]);

	//�迭�� �̸��� �迭�� ���� �ּ��̴�.
	printf("%x %x %x\n", msg, msg + 1, msg + 2);


	return 0;
}