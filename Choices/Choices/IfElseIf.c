#include <stdio.h>

//���� if��

//���� ������ ���� ���� ����ϱ�

int main() {

	int scores;
	char grade; //���� ������ ���ڿ� ����

	printf("���� �Է�: ");
	scanf_s("%d", &scores);

	if (scores >= 90 && scores <= 100)
		grade = 'A';

	else if(scores >=80)
		grade = 'B';

	else if (scores >= 70)
		grade = 'C';

	else  
		grade = 'F';

	printf("������ %c�Դϴ�.\n", grade);

	return 0;
}