#include <stdio.h>
/*


*/
typedef struct {
	int math;
	int eng;
	double avg;
}Score;

typedef struct {
	int num;
	char name[20];
	Score score; //성적 구조체 참조
}Student;

//과목의 평균 계산
void calcAvg(Score *score) //포인터 구조체를 필수적으로 전달함
{
	score->avg = (score->math + score->eng) / 2.0;
}



//학생 정보 출력
void showInfo(Student* s) {
	printf("학번:%d 이름:%s\n", s->num, s->name);
	printf("수학:%d 영어:%d\n", s->score.math, s->score.eng);
	printf("평균: %.1lf\n", s->score.avg);
}

int main()
{
	// 구조체 변수 선언
	Student st1 = { .num = 101, .name = "이우진",.score = {95,88,0.0} };
	Student st2 = { .num = 102, .name = "이정후",.score = {55,78,0.0} };

	calcAvg(&st1.score);
	calcAvg(&st2.score);


	showInfo(&st1); //매개변수로 구조체 포인터를 전달, 포인터를 사용하면 매개변수로 복사시 용량을 축소할 수 있다.
	showInfo(&st2); //매개변수로 구조체 포인터를 전달, 포인터를 사용하면 매개변수로 복사시 용량을 축소할 수 있다.
	return 0;
}