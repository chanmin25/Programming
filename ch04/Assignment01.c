/*���ϸ�: Core C Assignment01

*���� : ������ �ӷ��� �Ǽ��� �Է¹޾� � �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

*�ۼ��� : ������

*��¥ : 2025.04/09

*���� : v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getMotionEnergy(double weight, double velocity);
int assignment0401(void);

int main(void)
{
	int r = assignment0401();

	return r;
}

/*
	�Լ���: assignment0401()
	���(å��): ����, �ӷ��� �Է¹���. ��������� ����ϵ��� �Լ�ȣ��. �� ����� �ֿܼ� ���
	�Է�: ����
	��ȯ: �����̸� 0�̸� ����, �׿� ���� �����̴�.
*/

int assignment0401(void)
{
	// 1. ����, �ӵ� �Է� �޾� ����
	double weight = 0.0; //���� kg
	double velocity = 0.0; //�ӷ� m/s
	printf("���� �ӵ��� �Է����ּ���: ");
	scanf("%lf %lf", &weight, &velocity);


	// 2. ������� ���
	double result = getMotionEnergy(weight, velocity);

	// 3. ���� ������� ���
	printf("����=%.2f kg, �ӷ� %.2f m/s �� ��������� %.2f J �Դϴ�.", weight, velocity, result);

	return 0;
}

/*
	�Լ���: getMotionEnergy()
	���(å��): ����, �ӷ� �Է¹پ� ��������� ����Ͽ� ��ȯ
	�Է�: ����(kg), ����(m/s)
	��ȯ: �������
*/
double getMotionEnergy(double weight, double velocity)
{
	double energy = 0.0;

	//������ = 1/2 * ���� * �ӵ� * �ӵ�
	energy = 1.0 / 2.0 * weight * velocity * velocity;

	return energy;
}