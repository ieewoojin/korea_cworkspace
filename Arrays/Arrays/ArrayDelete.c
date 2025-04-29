#include <stdio.h>
#define MAX_LEN 5 //매크로 상수

int main() {

	//배열 요소 삭제

	int arr[MAX_LEN] = { 1,2,3,4,5 };
	for (int i = 0; i < 5;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	//arr[2] 삭제
	arr[2] = 0; //0으로 변경

	//배열의 인덱스를 왼쪽으로 이동

	for (int i = 2; i < 4;i++) {
		arr[i] = arr[i + 1];
	}
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
	
	

	return 0;
}