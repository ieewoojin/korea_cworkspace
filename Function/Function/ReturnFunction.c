#include <stdio.h>

		/*return �ִ� �Լ�*/

//�������� ����ϴ� �Լ� ����
int square(int x)
{
	return x * x;
}

//���밪�� ����ϴ� �Լ� ����
int myAbs(int x)
{
	if (x > 0) 
		return x;
	
	else 
		return -x;
}

//�� ���� ���ϴ� �Լ�
double add(double x, double y)
{
	return x + y;
}

int main()
{
	//�Լ� ȣ��
	int value1,value2;
	double value3;
	value1 = square(4); //square() ȣ��
	value2 = myAbs(-5); //myAbs() ȣ��
	value3 = add(5.35, 7.73);

	printf("%d\n", value1);
	printf("%d\n", value2);
	printf("%.1lf\n", value3);

	return 0;
}
