#include <stdio.h>
int main()
{
	//�迭�� ��� �� ��ȯ
	int a[5] = { 3,2,5,1,4 };
	int i,tmp;

	//����ġ ��ҿ� ���� ��� ��ȯ a[i], a[i+1]...
	
	for (i = 0; i < 4;i++) //�� �ε��� -1 ���� ��ȯ�� �����
	{
		tmp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = tmp;
	}
	for (i = 0; i < 5;i++)
	{
		printf("%d ", a[i]);
	}


	return 0;
}