#include <stdio.h>

/*
	정적변수(고정된 변수) - static을 변수 앞에 붙임
	값을 유지하고 공유하고 프로그램이 종료되면 소멸됨
*/

void call() //void는 반환자료형이 없음( return 값 x)
{
	static int x = 0;
	x +=  1;
	printf("현재 호출은 %d번째 입니다.\n",x);
}

int main()
{
	//call() 호출
	call();
	call();

	return 0;
}
