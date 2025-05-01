#include <stdio.h>

		/*return 있는 함수*/

//제곱수를 계산하는 함수 정의
int square(int x)
{
	return x * x;
}

//절대값을 계산하는 함수 정의
int myAbs(int x)
{
	if (x > 0) 
		return x;
	
	else 
		return -x;
}

//두 수를 더하는 함수
double add(double x, double y)
{
	return x + y;
}

int main()
{
	//함수 호출
	int value1,value2;
	double value3;
	value1 = square(4); //square() 호출
	value2 = myAbs(-5); //myAbs() 호출
	value3 = add(5.35, 7.73);

	printf("%d\n", value1);
	printf("%d\n", value2);
	printf("%.1lf\n", value3);

	return 0;
}
