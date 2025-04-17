#include <stdio.h>
int main(void) {

	//아스키코드 - 1바이트(256개)
	char ch = '0';
	printf("%c %d\n", ch, ch);
	printf("%c %d\n", ch + 1, ch + 1);
	printf("%c %d\n", ch + 2, ch + 2);

	//유니코드 - 2바이트(약65000개)

	char han[] = "가"; //배열 han에 "가" 저장함
	printf("%s\n", han);

	char uni[] = "\uAC00";  //"가"의 유니코드
	printf("%s\n", uni);

	//메모리 주소
	printf("%c %x\n", ch, &ch);
	printf("%s %x\n", uni, uni);    
	printf("%s %x\n", uni, &uni[0]);



	return 0;
}