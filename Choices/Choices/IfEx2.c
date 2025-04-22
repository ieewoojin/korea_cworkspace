#include <stdio.h>


int main() {

	// È¦, Â¦À» ÇÉÁ¤ÇÏ´Â ÇÁ·Î±×·¥

	int a=15;
	

	if (a > 10) {

		if (a % 2 == 0) {
			printf("%d´Â 10º¸´Ù Å« Â¦¼ö\n",a);
		}
	}
	
	else
		printf("%d´Â 10º¸´Ù Å« È¦¼ö\n",a);

	return 0;
}