#include <stdio.h>
int main() {

	char fruit1[5] = "apple"; //����� �� ���ڿ� 1����Ʈ (����)
	char fruit2[] = "apple"; //���ڿ��� ���� '\0' (NULL ����)�� ���Ե�.
	char fruit3[] = "�ٳ���"; //�ѱ��� �� ���ڿ� 2����Ʈ
	char fruit4[] = { 'a','p','p','l','e','\0' }; 

	/*printf("%s\n", fruit1);
	printf("%s\n", fruit2);
	printf("%s\n", fruit3);*/

	//���ڿ� �迭�� ũ�� - sizeof()
	printf("%s %d\n", fruit1, sizeof(fruit1));
	printf("%s %d\n", fruit2, sizeof(fruit2));
	printf("%s %d\n", fruit3, sizeof(fruit3));
	printf("%s %d\n", fruit4, sizeof(fruit4));

	// fruit2 �迭�� ũ��
	printf("%dByte\n", sizeof(fruit2)); //6����Ʈ
	printf("%dByte\n", sizeof(fruit2[0])); //1����Ʈ

	int size = sizeof(fruit2) / sizeof(fruit2[0]);
	printf("fruit2 �迭�� ũ��: %d\n", size);

	//fruit4�� %c�� ��� (%c�� for�� ����ؾ���.)
	for (int i = 0; i < size; i++)
	{
		printf("%c", fruit2[i]);
	}
	return 0;
}