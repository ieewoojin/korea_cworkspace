#include <stdio.h>
#include <math.h>

/*
	수학 관련 함수
*/

int main()
{
	
	printf("%.1f\n", round(2.54)); //반올림
	printf("%.1f\n", round(2.14)); //반올림


	printf("%.1f\n", floor(2.54)); //내림
	printf("%.1f\n", floor(2.14)); //내림

	printf("%.f\n", ceil(2.54)); //올림
	printf("%.f\n", ceil(2.14)); //올림

	printf("%.d\n", abs(-8)); //절대값
	printf("%.d\n", abs(8)); //절대값

	printf("%.f\n", pow(2,4)); //거듭제곱
	printf("%.f\n", pow(10,3)); //거듭제곱

	printf("%.f\n", sqrt(16)); //제곱근
	printf("%.f\n", sqrt(100)); //제곱근
	



	return 0;
}

