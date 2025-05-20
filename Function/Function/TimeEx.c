#include <stdio.h>
#include <time.h> //time()
#include <Windows.h> //Sleep()

//time_t 자료형을 사용

int main()
{
	/*time_t now;
	//long now;
	now = time(NULL); // 시간이 계속 흐름을 의미

	printf("1970/1/1/00:00:00 이후 = %ld초\n", now); //초 기준

	printf("1970/1/1/00:00:00 이후 = %ld일\n", now/(24*60*60)); //일 환산
	
	printf("1970/1/1/00:00:00 이후 = %ld년\n", now / (365*24 * 60*60 )); //년 환산

	//수행 시간 측정해보기
	time_t start, end;

	start = time(NULL); // 시작 시간
	printf("시작 시각:%d초\n", start);
	
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
		Sleep(500);
	}

	end = time(NULL); // 종료 시간
	printf("종료 시각:%d초\n", end);
	printf("수행시간:%ld초\n", (end - start));*/




	
	//정밀 수행 시간
	clock_t start, end;
	double elapsedTime; //소요 시각

	start = clock();

	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
		Sleep(500);
	}
	end = clock();

	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC; //CLOCKS_PER_SEC; : 초당 시각 상수
	printf("소요 시간:%.2f초\n", elapsedTime);


	return 0;
}

