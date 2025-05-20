#include <stdio.h>



//int  square() //사각형
//{
//	int width = 4;
//	int s1;
//	s1 = width * width;
//	return s1;
//}
//
//float triangle()
//{
//	int width = 3;
//	int height = 5;
//	float s2;
//	s2 = (float)(width * height) / 2.0;
//	return s2;
//}
//
//int main()
//{
//
//	printf("정사각형의 넓이:%dcm\n", square());
//	printf("삼각형의 넓이:%.1lfcm\n", triangle());
//
//	return 0;
//}

int square(int x)
{
	return x * x;
}

float triangle(int width, int height)
{
	float area= (width * height) / 2.0; //==(float)(width * height) / 2;
	return area;
}

int main()
{
	int rectArea;
	float triArea;
	rectArea = square(4);
	triArea = triangle(3, 5);

	printf("정사각형의 넓이: %dcm\n", rectArea);
	printf("삼각형의 넓이: %.1fcm\n", triArea);
}
