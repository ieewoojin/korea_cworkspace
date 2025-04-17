#include <stdio.h>
// 자료형의 변환 


int main() {

	//묵시적 형변환(자동 형변환)
	int iNum = 20;
	float fNum = iNum; // 큰 자료형 = 작은 자료형
	double dNum = 2.54;
	int iNum2;

	printf("%d\n", iNum);
	printf("%.1f\n", fNum);
	printf("%.1f\n", iNum + fNum);

	//명시적 형변환(강제 형변환), 자료형을 소괄호로 묶어줌
	iNum2 = (int)dNum;
	printf("%d\n", iNum2);

	dNum = 1.2;
	fNum = 0.9F;
	iNum = (int)dNum + (int)fNum;
	printf("%d\n", iNum);

	iNum = (int)(dNum + fNum);
	printf("%d\n", iNum);

	return 0;
}