#include <stdio.h>
int main()
{
	//성적의 개수, 합계, 평균, 최대, 최소
	int score[5] = { 85,75,90,70,80 };
	int sum = 0;
	double avg;
	int min, max;


	//배열의 크기(개수)
	int count = sizeof(score) / sizeof(score[0]);  
	printf("배열의 크기: %d\n", count);

	//성적의 합계
	for (int i = 0; i < count;i++)
	{
		sum += score[i];
	}
	printf("성적의 합계: %d\n", sum);

	//성적의 평균
	avg = (double)sum / count; //강제 형변환 해줘야함.
	printf("성적의 평균: %.1lf\n", avg);

	//성적의 최소값
	min = score[0]; //배열의 첫번째 값을 임의로 설정함.
	for (int i = 0; i < count; i++)
	{
		if (score[i] < min)
			min = score[i];
	}


	printf("성적의 최소값: %d\n", min);

	//성적의 최대값
	max = score[0]; //배열의 첫번째 값을 임의로 설정함.
	for (int i = 0; i < count; i++)
	{
		if (score[i] > max)
			max = score[i];
	}
	printf("성적의 최대값: %d\n", max);


	return 0;
}