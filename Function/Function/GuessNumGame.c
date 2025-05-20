#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//숫자 추측 게임 -> 컴퓨터가 난수 생성 -> 사용자가 예측한 수를 입력 -> 1. 정답, 2. 추측한 수 > 난수, 3. 추측한 수 < 난수
int main()
{
	srand(time(NULL));
	int randNum; //컴퓨터가 생성한 난수
	int guessNum=0; //사용자가 추측한 수
	int count=5; // 맞출 시도한 횟수
	
	randNum = rand() % 50 + 1; //1~50까지의 난수 생성
	//printf("컴퓨터의 수: %d\n", randNum);

	while (1) {  //무한 반복
		printf("남은 횟수 %d번\n", count--);

		printf("숫자를 맞추세요(1~50 입력): ");
		scanf_s("%d", &guessNum);


		if (guessNum == randNum)
		{
			printf("정답입니다!\n");
			printf("컴퓨터의 수:%d", randNum);
			break;
		}
		else if (guessNum > randNum)
		{
			printf("너무 숫자가 큽니다!\n");
		}
		else
		{
			printf("너무 숫자가 작습니다!\n");
		}
		

		if (count == 0) {
			printf("남은 횟수가 0입니다. 아쉽게 실패 했습니다.\n");
			printf("컴퓨터의 수는 :%d이었습니다!", randNum);
			break;
		}

	}
	


	return 0;
}