#include <stdio.h>
	// 변수 값 교환하기
int main() {
	int x = 1;
	int y = 2;
	int temp;
	printf("=====교환 전=====\n");
	printf("x = %d, y =%d\n", x, y);
	
	temp = x;
	x = y;
	y = temp;
	printf("\n");
	printf("=====교환 후=====\n");
	printf("x = %d, y =%d\n", x, y);
	printf("\n");

	//복합 대입 연산자(산술+대입)
	int value = 10;
	value +=3; //value=value+3;
	printf("%d\n", value);

	value -= 3;
	printf("%d\n", value);
	
	value *= 3;
	printf("%d\n", value);

	value /= 3;
	printf("%d\n", value);

	value %= 3;
	printf("%d\n", value);

	

	return 0;
}
