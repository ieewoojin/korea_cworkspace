
#include <stdio.h>
int main() {

	//ȸ�� ������ �Է��ϰ� ����ϴ� ���α׷�

	char id[20], pw[200], name[30];
	float weight, height;

	printf("\n=======ȸ�� ���� �Է�=======\n");
	printf("���̵� �Է�:");
	scanf_s("%s", id, sizeof(id)); //�迭�� �ּҿ�����(&) ������� ����, sizeof(id):�Է� ũ�⸦ �����ؼ� ���� �����÷ο� ����

	printf("��й�ȣ �Է�:");
	scanf_s("%s", pw, sizeof(pw));

	printf("�̸� �Է�:");
	scanf_s("%s", name, sizeof(name));

	printf("Ű �Է�:");
	scanf_s("%f", &height);

	printf("������ �Է�:");
	scanf_s("%f", &weight);



	// ȸ�� ���� ���
	printf("\n======ȸ�� ���� ���=======\n");
	printf("���̵�: %s\n", id);
	printf("��й�ȣ: %s\n", pw);
	printf("�̸�: %s\n", name);
	printf("Ű: %.1f\n", height);
	printf("������: %.1f\n", weight);


	return 0;
}