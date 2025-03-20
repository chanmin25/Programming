#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float x;

	printf("몸무게?");
	scanf("%f", &x);

	printf("입력한 몸무게는 %.2f KG입니다.\n", x);

	return 0;
}