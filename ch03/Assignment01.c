/*���ϸ�: Core C Assignment01.c 

*���� : �ѹ��� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

*�ۼ��� : ������

*��¥ : 2025.04.03

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void length(void)
{
	int num;

	printf("�� ���� ����?");
	scanf("%d", &num);

	printf("���簢���� ����:%d \n", num*num);
	printf("���簢���� �ѷ�:%d", num*4);

	return 0;
}

int main(void)
{
	length();
	return 0;
}