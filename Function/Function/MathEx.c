#include <stdio.h>
#include <math.h>

/*
	���� ���� �Լ�
*/

int main()
{
	
	printf("%.1f\n", round(2.54)); //�ݿø�
	printf("%.1f\n", round(2.14)); //�ݿø�


	printf("%.1f\n", floor(2.54)); //����
	printf("%.1f\n", floor(2.14)); //����

	printf("%.f\n", ceil(2.54)); //�ø�
	printf("%.f\n", ceil(2.14)); //�ø�

	printf("%.d\n", abs(-8)); //���밪
	printf("%.d\n", abs(8)); //���밪

	printf("%.f\n", pow(2,4)); //�ŵ�����
	printf("%.f\n", pow(10,3)); //�ŵ�����

	printf("%.f\n", sqrt(16)); //������
	printf("%.f\n", sqrt(100)); //������
	



	return 0;
}

