#include <stdio.h>

//인사하기 기능을 하는 함수 정의
void SayHello()
{
	printf("안녕하세요\n");
}

//이름 부르는 인사하기 기능
void SayHello2(char name[])
{
	printf("%s님 안녕하세요\n", name);
}


/*
        <main함수>

- 프로그램 실행하는 기능을 함  
- return이 있는 함수 (운영체제에게 반환)
- 자료형 함수이름() {}
- void형 -> 자료형이 없을 때(return이 없음)
- 함수의 위치는 두가지로 나뉨.
1. main() 위 -> 정의된 함수
2. main() 아래 -> 선언부는 위, 구현부는 아래에 위치.
*/

int main() 
{
	SayHello();
	SayHello2("이우진");
	SayHello2("leewoojin");

	return 0;
}
