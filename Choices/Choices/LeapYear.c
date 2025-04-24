#include <stdio.h>


int main() {

	/*
		윤년(2월이 29일까지 있는 해) 판정하기.
		- 4년에 1번 씩 윤년이 있음.
		- 100년에 1번씩 오는 해는 윤년이 아님. (100의 배수는 윤년이 아님)
		- 400의 배수는 윤년임.
	*/
	int year;
	printf("년도를 입력하세요: ");
	scanf_s("%d", &year);
	 
	if (((year % 4 == 0) && (year%100!=0)) || (year%400==0)) {
		printf("윤년입니다.\n");
	}
	else
		printf("윤년이 아닙니다.\n");


	return 0;
}