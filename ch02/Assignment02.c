#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num;
	float x;

	printf("��ȣ?");
	scanf("%d" , &num);

	printf("����?");
	scanf("%f" , &x);

	printf("%d�� �л��� ������ %f�Դϴ�.\n", num, x);

	return 0;
}
