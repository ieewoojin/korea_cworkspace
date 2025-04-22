#include <stdio.h>

//다중 if문

//과목 점수에 따른 학점 계산하기

int main() {

	int scores;
	char grade; //학점 저장할 문자열 변수

	printf("성적 입력: ");
	scanf_s("%d", &scores);

	if (scores >= 90 && scores <= 100)
		grade = 'A';

	else if(scores >=80)
		grade = 'B';

	else if (scores >= 70)
		grade = 'C';

	else  
		grade = 'F';

	printf("학점은 %c입니다.\n", grade);

	return 0;
}