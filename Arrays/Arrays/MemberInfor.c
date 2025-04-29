
#include <stdio.h>
int main() {

	//회원 정보를 입력하고 출력하는 프로그램

	char id[20], pw[200], name[30];
	float weight, height;

	printf("\n=======회원 정보 입력=======\n");
	printf("아이디 입력:");
	scanf_s("%s", id, sizeof(id)); //배열은 주소연산자(&) 사용하지 않음, sizeof(id):입력 크기를 제한해서 버퍼 오버플로우 방지

	printf("비밀번호 입력:");
	scanf_s("%s", pw, sizeof(pw));

	printf("이름 입력:");
	scanf_s("%s", name, sizeof(name));

	printf("키 입력:");
	scanf_s("%f", &height);

	printf("몸무게 입력:");
	scanf_s("%f", &weight);



	// 회원 정보 출력
	printf("\n======회원 정보 출력=======\n");
	printf("아이디: %s\n", id);
	printf("비밀번호: %s\n", pw);
	printf("이름: %s\n", name);
	printf("키: %.1f\n", height);
	printf("몸무게: %.1f\n", weight);


	return 0;
}