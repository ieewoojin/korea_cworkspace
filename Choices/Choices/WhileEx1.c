#include <stdio.h>


int main() {

	//1~10���� �հ� ���
	int i = 1;
	int sum = 0;
	
	while (i < 11) {
		sum += i;
		printf("i=%d, sum=%d\n", i, sum);
		i++;
		
	}
	printf("i=%d, sum: %d\n", i,sum);


	return 0;
}