#include <stdio.h>

int main() {

	//�� ������ 1-��, 0-����

	int a = 5, b = 3, c = 2;

	printf("(a > b)= %d\n", a > b);
	printf("(a < b)= %d\n", a < b);
	printf("(a >= b)= %d\n", a >= b);
	printf("(a <= b)= %d\n", a <= b);
	printf("(a == b)= %d\n", a == b);
	printf("(a != b)= %d\n", a != b);

	//�� ������ (�� ������ 2�� �̻��� ���)

	printf("(a < b) && (b < c)= %d\n", (a < b) && (b < c));
	printf("(a < b) || (c < b)= %d\n", (a < b) || (c < b));
	printf("!(a < b)= %d\n", !(a < b) );
	printf("!(a >= b)= %d\n", !(a >= b));
	return 0;
}