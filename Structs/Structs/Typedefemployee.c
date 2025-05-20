#include <stdio.h>
/*
	
*/

typedef struct {

	int id;
	int salary; //급여
	char name[20];

}Employee;

int main()
{
	//struct 없이 구조체 변수 선언
	/*Employee e1 = { 1,1000000,"lee" };

	printf("사원id:%d 급여:%d 이름:%s\n", e1.id, e1.salary, e1.name);*/

	//구조체 배열 3명 생성
	Employee e[3] = {
	{1,100000,"kim"},
	  {2,200000,"lee"},
	  { 3,300000,"park" }
	};

	int i;
	for (i = 0; i < 3; i++) {
		printf("사원id:%d 급여:%d 이름:%s\n", e[i].id, e[i].salary, e[i].name);
	}
	return 0;
}


