#include <stdio.h>


//while(1) -> 무한 반복임, break 사용해야함
//1~10까지 합 출력

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