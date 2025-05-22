#include <stdio.h>

typedef struct {
	//Fruit의 속성(멤버 변수)
	char name[20];
	int quantity;
	char* type;
}Fruit;




int main()

{
	//포인터 배열 선언
	char* types[] = { "apple","banana","orange" };

	Fruit f = { "대구 사과",100,"Apple" };
	Fruit* ptr; //구조체 포인터 선언

	ptr = &f; //구조체 변수의 주소 저장

	printf("==== 변수로 접근 ====\n");
	printf("과일 이름: %s\n", ptr->name);
	printf("수량: %d\n", ptr->quantity);
	ptr->type = "grape";
	printf("과일 종류: %s\n", ptr->type);

	/*printf("==== 변수로 접근 ====\n");
	printf("과일 이름: %s\n",f.name);
	printf("수량: %d\n",f.quantity);
	f.type = "grape";
	printf("과일 종류: %s\n",f.type);*/

	return 0;
}