/*���ϸ�: Core C Assignment03.c

*���� : ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ kg ����, ���̴� m ������ �Է¹޴´�.

*�ۼ��� : ������

*��¥ : 2025.04.03

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double dpsjwl(int weight, int height)
{
	double energy;
	energy = 9.8 * weight * height;
	return energy;
}

void tkaqjs(void)
{
	int kg;
	int m;
	double energy;

	printf("����(kg)?");
	scanf("%d", &kg);

	printf("����(m)?");
	scanf("%d", &m);

	energy = dpsjwl(kg, m);
	printf("��ġ������: %.6lf J\n", energy);

	return 0;
}

int main(void)
{
	tkaqjs();
	return 0;
}