/*���ϸ�: Assignment02.c

*���� : �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.

*�ۼ��� : ������

*��¥ : 2025.3.20

*���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void school(void)
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

int main(void)
{
	school();
	return 0;
}
