#include <stdio.h>
int main() {

	//배열의 크기가 6인 문자형 배열 생성
	char msg[6] = { 'h','e','l','l','o' };

	printf("%c\n", msg[4]); //특정요소 검색

	//전체 출력
	for (int i = 0; i < 5; i++)
	{
		printf("%c ", msg[i]);
	}
	printf("\n");

	msg[0] = 'y'; //요소 수정

	msg[5] = 'w';   //요소 추가

	for (int i = 0; i < 6; i++)
	{
		printf("%c ", msg[i]);
	}
	printf("\n");

	//메모리 주소 출력(문자형 1바이트씩 증가)
	printf("%x %x %x\n", &msg[0], &msg[1], &msg[2]);

	//배열의 이름은 배열의 시작 주소이다.
	printf("%x %x %x\n", msg, msg + 1, msg + 2);


	return 0;
}