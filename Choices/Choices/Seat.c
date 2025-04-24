#include <stdio.h>

/*입장객 수에 따른 좌석의 줄 수 계산하는 프로그램*/

int main() {
	
	int customer; //입장객
	int column; //열
	int row; //행
	printf("입장객 수 입력: ");
	scanf_s("%d", &customer);

	printf("좌석 열의 개수 입력: ");
	scanf_s("%d", &column);

	
	if (customer % column == 0)
	{
		row = customer / column;
	}
	else
		row = customer / column + 1;
	printf("%d개의 줄이 필요합니다.\n", row);



	return 0;
}
