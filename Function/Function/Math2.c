#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

/*
	������ - ���(M_PI)
*/

int myPow(int x, int y)
{
	int gob = 1;
	int i;

	for (i = 0; i <y ; i++) {
		gob *= x;
	}
	return gob;
}

int main()
{
	printf("%f\n", M_PI);
	printf("%.2f\n", M_PI);

	int ans = pow(2, ceil(M_PI));
	printf("%d\n", ans);
	
	//1~5���� ���ϱ�
	/*int gob = 1;
	int i;

	for (i = 1; i <= 5; i++) {
		gob *= i;
	}

	printf("%d\n", gob);*/

	//�ŵ����� ȣ��
	printf("%d\n",myPow(2, 3));


	return 0;
}

