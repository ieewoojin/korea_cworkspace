#include <stdio.h>

//�λ��ϱ� ����� �ϴ� �Լ� ����
void SayHello()
{
	printf("�ȳ��ϼ���\n");
}

//�̸� �θ��� �λ��ϱ� ���
void SayHello2(char name[])
{
	printf("%s�� �ȳ��ϼ���\n", name);
}


/*
        <main�Լ�>

- ���α׷� �����ϴ� ����� ��  
- return�� �ִ� �Լ� (�ü������ ��ȯ)
- �ڷ��� �Լ��̸�() {}
- void�� -> �ڷ����� ���� ��(return�� ����)
- �Լ��� ��ġ�� �ΰ����� ����.
1. main() �� -> ���ǵ� �Լ�
2. main() �Ʒ� -> ����δ� ��, �����δ� �Ʒ��� ��ġ.
*/

int main() 
{
	SayHello();
	SayHello2("�̿���");
	SayHello2("leewoojin");

	return 0;
}
