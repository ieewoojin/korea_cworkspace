#include <stdio.h>
#define MAX_LEN 4
int main()
{
	//배열 요소 저장 및 삭제
	int scores[MAX_LEN]; //배열의 크기는 상수만 사용!
	int indexOfScores = 0; //배열의 인덱스를 저장할 변수 

	//요소 추가(저장)
	if(indexOfScores<MAX_LEN)
		scores[indexOfScores++] = 80; //scores[0]

	if (indexOfScores < MAX_LEN)
		scores[indexOfScores++] = 70; //scores[1]

	if (indexOfScores < MAX_LEN)
		scores[indexOfScores++] = 95; //scores[2]

	if (indexOfScores < MAX_LEN)
		scores[indexOfScores++] = 80; //scores[3]

	//요소 삭제
	if(indexOfScores>0) indexOfScores--;
	if (indexOfScores > 0) indexOfScores--;
	if (indexOfScores > 0) indexOfScores--;
	//if (indexOfScores > 0) indexOfScores--;

	//전체 출력
	//삭제 시 오류 처리
	printf("현재 배열 상태\n");
	if (indexOfScores == 0)
	{
		printf("(비어있음)\n");
	}
	else
	{
		printf("남은 요소 수: %d\n", indexOfScores);

		for (int i = 0; i < indexOfScores; i++)
		{
			printf("%d\n", scores[i]);
		}

	}



	return 0;
}