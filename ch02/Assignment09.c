/*���ϸ�: Assignment09.c

*���� : 16���� ������ �Է¹޾� 10����������ϴ� ���α׷��� �ۼ��Ͻÿ�.

*�ۼ��� : ������

*��¥ : 2025.3.23

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void yours(void)
{
	int num;

	printf("16���� ����?");
	scanf("%x", &num);

	printf("16���� %x�� 10������ %d�Դϴ�.\n", num , num);

	return 0;
}

int main(void)
{
	yours();
	return 0;
}

