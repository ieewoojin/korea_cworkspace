#include <stdio.h>
/*	전역변수와 지역변수
	지역변수 - 함수 또는 제어문(조건, 반복) 블럭 내부에서 생성되고, 호출되거나 사용된 후 메모리에서 소멸.
	전역변수 - main() 위에 사용되어 전체 범위에 영향을 미치고, 프로그램이 종료될 때 소멸.
*/

int x = 1; //전역 변수
int add10(); //함수 선언부
int main()
{
	int value; //main()의 지역변수
	value = add10();
	printf("%d\n", value); //add10() 호출
	printf("%d\n", x);


	
	return 0;
}

//어떤 수에 10을 더하는 함수

int add10()
{
	int x = 1; // 지역변수(local variable)
	x = x + 10;

	return x;
}

