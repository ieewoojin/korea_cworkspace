#include <stdio.h>
int main(void) {

	//�ƽ�Ű�ڵ� - 1����Ʈ(256��)
	char ch = '0';
	printf("%c %d\n", ch, ch);
	printf("%c %d\n", ch + 1, ch + 1);
	printf("%c %d\n", ch + 2, ch + 2);

	//�����ڵ� - 2����Ʈ(��65000��)

	char han[] = "��"; //�迭 han�� "��" ������
	printf("%s\n", han);

	char uni[] = "\uAC00";  //"��"�� �����ڵ�
	printf("%s\n", uni);

	//�޸� �ּ�
	printf("%c %x\n", ch, &ch);
	printf("%s %x\n", uni, uni);    
	printf("%s %x\n", uni, &uni[0]);



	return 0;
}