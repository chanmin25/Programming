/*���ϸ�: Core C Assignment07.c

*���� : �Ǽ����� �Է¹޾� �� ���� ������ �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �Ǽ����� �Է¹��� ���� 12.34ó�� �Ҽ� ǥ�� ���
* �̳� 1.234e2ó�� ���� ǥ�� ����� �� �� ����� �� �ְ� �ϰ� ������ �������� ����� ���� ���� ǥ�� ������� ����Ͻÿ�.

*�ۼ��� : ������

*��¥ : 2025.04.03

*���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void thtn(void)
{
	double num;

	printf("�Ǽ�?");
	scanf("%lf", &num);

	printf("����: %e\n", num * num);
	printf("������: %e", num * num * num);

	return 0;
}

int main(void)
{
	thtn();
	return 0;
}