/*���ϸ�: Core C Assignment04.c

*���� : ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� ũ���
* N ������ �Է¹ް�, �̵��� �Ÿ��� m ������ �Է¹޴´�.

*�ۼ��� : ������

*��¥ : 2025.04.03

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void strong(void)
{
	float num;
	float road;

	printf("��(N)?");
	scanf("%f", &num);

	printf("�̵��Ÿ�(m)?");
	scanf("%f", &road);

	printf("���� ��: %.2f J", num * road);

	return 0;
}

int main(void)
{
	strong();
	return 0;
}