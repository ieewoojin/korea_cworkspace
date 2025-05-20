#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	구조체 - 여러가지 자료형을 그룹화한 자료형(복합 자료형)
*/
struct Person {

	char name[20];
	int age;
	float height;
};

int main()
{
	
	//구조체 변수 선언 방법1
	//struct Person p1 = { "lee",23,190.1f };

	//방법2
	/*struct Person p1;

	strcpy(p1.name, "lee");
	p1.age = 23;
	p1.height =190.1f;*/

	//멤버 변수에 접근할 때 점(.) 연산자 사용
	//printf("이름:%s 나이:%d 키:%.1f", p1.name, p1.age, p1.height);


	//구조체 배열

	struct Person p[3] = {
		{"kim", 45,189.14f},
		{"park",32,169.2f},
		{"hong",22,175.1f}
	};

	int i;
	//p[0]의 정보
	//printf("이름:%s 나이:%d 키:%.1f", p[0].name, p[0].age, p[0].height);

	//전체 출력
	for (i = 0; i < 3; i++)
	{
		printf("이름:%s 나이:%d 키:%.1f\n", p[i].name, p[i].age, p[i].height);
	}
	return 0;
}