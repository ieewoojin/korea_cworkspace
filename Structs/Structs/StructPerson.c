#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	����ü - �������� �ڷ����� �׷�ȭ�� �ڷ���(���� �ڷ���)
*/
struct Person {

	char name[20];
	int age;
	float height;
};

int main()
{
	
	//����ü ���� ���� ���1
	//struct Person p1 = { "lee",23,190.1f };

	//���2
	/*struct Person p1;

	strcpy(p1.name, "lee");
	p1.age = 23;
	p1.height =190.1f;*/

	//��� ������ ������ �� ��(.) ������ ���
	//printf("�̸�:%s ����:%d Ű:%.1f", p1.name, p1.age, p1.height);


	//����ü �迭

	struct Person p[3] = {
		{"kim", 45,189.14f},
		{"park",32,169.2f},
		{"hong",22,175.1f}
	};

	int i;
	//p[0]�� ����
	//printf("�̸�:%s ����:%d Ű:%.1f", p[0].name, p[0].age, p[0].height);

	//��ü ���
	for (i = 0; i < 3; i++)
	{
		printf("�̸�:%s ����:%d Ű:%.1f\n", p[i].name, p[i].age, p[i].height);
	}
	return 0;
}