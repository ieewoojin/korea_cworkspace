#include <stdio.h>


//while(1) -> ���� �ݺ���, break ����ؾ���
//1~10���� �� ���

int main() {

	int n = 1;
	int sum = 0;

	while (1) {
		
		if (n > 10)
			break;
		printf("%d ", n);
		sum += n;
		n++;
		
	}
	printf("\nsum = %d\n", sum);

	return 0;
}