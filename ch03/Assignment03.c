/*���ϸ�: Core C Assignment03.c

*���� : ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ kg ����, ���̴� m ������ �Է¹޴´�.

*�ۼ��� : ������

*��¥ : 2025.04.03

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double calcPositionEnergy(int weight, int height)
{
	double energy;
	energy = 9.8 * weight * height;
	return energy;
}

void Assignment0303(void)
{
	int kg;
	int m;
	double energy;

	printf("����(kg)?");
	scanf("%d", &kg);

	printf("����(m)?");
	scanf("%d", &m);

	energy = calcPositionEnergy(kg, m);
	printf("��ġ������: %.6lf J\n", energy);

	return 0;
}

int main(void)
{
	Assignment0303();
	return 0;
}