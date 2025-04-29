#include <stdio.h>
int main() {

	char fruit1[5] = "apple"; //영어는 한 글자에 1바이트 (에러)
	char fruit2[] = "apple"; //문자열이 끝은 '\0' (NULL 문자)이 포함됨.
	char fruit3[] = "바나나"; //한글은 한 글자에 2바이트
	char fruit4[] = { 'a','p','p','l','e','\0' }; 

	/*printf("%s\n", fruit1);
	printf("%s\n", fruit2);
	printf("%s\n", fruit3);*/

	//문자열 배열의 크기 - sizeof()
	printf("%s %d\n", fruit1, sizeof(fruit1));
	printf("%s %d\n", fruit2, sizeof(fruit2));
	printf("%s %d\n", fruit3, sizeof(fruit3));
	printf("%s %d\n", fruit4, sizeof(fruit4));

	// fruit2 배열의 크기
	printf("%dByte\n", sizeof(fruit2)); //6바이트
	printf("%dByte\n", sizeof(fruit2[0])); //1바이트

	int size = sizeof(fruit2) / sizeof(fruit2[0]);
	printf("fruit2 배열의 크기: %d\n", size);

	//fruit4를 %c로 출력 (%c는 for문 사용해야함.)
	for (int i = 0; i < size; i++)
	{
		printf("%c", fruit2[i]);
	}
	return 0;
}