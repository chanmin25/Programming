/*���ϸ�: Core C Assignment02.c

*���� : ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

*�ۼ��� : ������

*��¥ : 2025.04.03

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void width(void)
{
	int num =0;
	int sero =0;

	printf("������ ����?");
	scanf("%d", &num);

	printf("������ ����?");
	scanf("%d", &sero);

	printf("���簢���� ����:%d \n", num * sero);
	printf("���簢���� �ѷ�:%d", num * 2 + sero * 2);

	return 0;
}

int main(void)
{
	width();
	return 0;
}