#include <stdio.h>
/*
	switch(변수){
	case: 실행문; break;
	default:실행문; break;
	}
*/


int main() {

	int floor;
	printf("층을 누르세요:");
	scanf_s("%d", &floor);

	switch (floor)
	{
	case 1:
		printf("1층을 누름\n");
		break;
	case 2:
		printf("2층을 누름\n");
		break;
	case 3:
		printf("3층을 누름\n");
		break;
	default:
		printf("건물에 없는 층 입니다.\n");
		break;
	}




	return 0;
}
