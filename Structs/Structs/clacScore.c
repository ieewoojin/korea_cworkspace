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
	Score score; //���� ����ü ����
}Student;

//������ ��� ���
void calcAvg(Score *score) //������ ����ü�� �ʼ������� ������
{
	score->avg = (score->math + score->eng) / 2.0;
}



//�л� ���� ���
void showInfo(Student* s) {
	printf("�й�:%d �̸�:%s\n", s->num, s->name);
	printf("����:%d ����:%d\n", s->score.math, s->score.eng);
	printf("���: %.1lf\n", s->score.avg);
}

int main()
{
	// ����ü ���� ����
	Student st1 = { .num = 101, .name = "�̿���",.score = {95,88,0.0} };
	Student st2 = { .num = 102, .name = "������",.score = {55,78,0.0} };

	calcAvg(&st1.score);
	calcAvg(&st2.score);


	showInfo(&st1); //�Ű������� ����ü �����͸� ����, �����͸� ����ϸ� �Ű������� ����� �뷮�� ����� �� �ִ�.
	showInfo(&st2); //�Ű������� ����ü �����͸� ����, �����͸� ����ϸ� �Ű������� ����� �뷮�� ����� �� �ִ�.
	return 0;
}