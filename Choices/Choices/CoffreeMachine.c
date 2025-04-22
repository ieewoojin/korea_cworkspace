#include <stdio.h>
int main() {

	int money= 500;
	int coffee = 5;

	while (1) //무한 반복
	{
		printf("동전을 넣어주세요: ");
		scanf_s("%d", &money);

		if (money == 500)
		{
			printf("커피 나옵니다.\n");
			coffee--;
		}

		else if (money > 500)
		{
			printf("커피가 나오고 거스름돈 %d원이 나옵니다.\n", (money - 500));
			coffee--;
		}

		else
			printf("커피가 안 나오고 넣은 돈이 반환됩니다.\n");

		if (coffee == 0) 
		{
			printf("커피가 소진되었습니다. 판매를 중단합니다.\n");

			break;
		}
		
	}

	printf("\n=====프로그램 종료=====\n");

	return 0;
}