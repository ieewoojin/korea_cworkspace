#include <stdio.h>
/*
	
*/

typedef struct {

	int id;
	int salary; //�޿�
	char name[20];

}Employee;

int main()
{
	//struct ���� ����ü ���� ����
	/*Employee e1 = { 1,1000000,"lee" };

	printf("���id:%d �޿�:%d �̸�:%s\n", e1.id, e1.salary, e1.name);*/

	//����ü �迭 3�� ����
	Employee e[3] = {
	{1,100000,"kim"},
	  {2,200000,"lee"},
	  { 3,300000,"park" }
	};

	int i;
	for (i = 0; i < 3; i++) {
		printf("���id:%d �޿�:%d �̸�:%s\n", e[i].id, e[i].salary, e[i].name);
	}
	return 0;
}


