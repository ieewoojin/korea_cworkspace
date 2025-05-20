#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h> //time()


int main()
{
	//난수(무작위 수) 사용

	//srand(10); // 시드 배정
	srand(time(NULL));

	/*int rndVa1 = rand();
	printf("%d\n", rndVa1);*/

	//동전 던지기

	int coin = rand() % 2;
	printf("%d\n", coin); // 앞:0 or 뒷:1

	if (coin % 2 == 0) {
		printf("앞면\n");
	}
	else
		printf("뒷면\n");


	//가위바위보 출력

	int num = rand() % 3;
	printf("%d\n", num);

	switch (num)
	{
	case 0:
		printf("가위\n");
		break;
	case 1:
		printf("바위\n");
		break;
	case 2:
		printf("보\n");
		break;
	default:
		printf("없음\n");
		break;
	}

	//주사위 10번 던지기 (1~6)

	
	for (int i = 1;i <= 10;i++) {
		int dice = rand() % 6 + 1;
		printf("%d\n", dice);
	}
	return 0;
}

