#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num;
	float x;

	printf("번호?");
	scanf("%d" , &num);

	printf("학점?");
	scanf("%f" , &x);

	printf("%d번 학생의 학점은 %f입니다.\n", num, x);

	return 0;
}
