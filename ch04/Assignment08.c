/*���ϸ�: Core C Assignment08

*���� : �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. �̶� ���̴� 3.141592��� ����.

*�ۼ��� : ������

*��¥ : 2025.04.09

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double qnvl(double x);
int assignment0408(void);

int main(void)
{
	int r = assignment0408();
	return r;
}

int assignment0408(void)
{
	double x = 0.0;
	printf("�������� ����?");
	scanf("%lf", &x);

	double result = qnvl(x);

	printf("���� ����: %lf", result);

	return 0;
}

double qnvl(double x)
{
	double dnjs = 0.0;
	dnjs = 4.0 / 3.0 * 3.141592 * x * x * x;

	return dnjs;
}

