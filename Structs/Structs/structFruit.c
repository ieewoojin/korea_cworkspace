#include <stdio.h>

typedef struct {
	//Fruit�� �Ӽ�(��� ����)
	char name[20];
	int quantity;
	char* type;
}Fruit;




int main()

{
	//������ �迭 ����
	char* types[] = { "apple","banana","orange" };

	Fruit f = { "�뱸 ���",100,"Apple" };
	Fruit* ptr; //����ü ������ ����

	ptr = &f; //����ü ������ �ּ� ����

	printf("==== ������ ���� ====\n");
	printf("���� �̸�: %s\n", ptr->name);
	printf("����: %d\n", ptr->quantity);
	ptr->type = "grape";
	printf("���� ����: %s\n", ptr->type);

	/*printf("==== ������ ���� ====\n");
	printf("���� �̸�: %s\n",f.name);
	printf("����: %d\n",f.quantity);
	f.type = "grape";
	printf("���� ����: %s\n",f.type);*/

	return 0;
}