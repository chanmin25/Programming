/*���ϸ�: Core C Assignment15

*���� : ȯ������������ ���ึ�� �̸� ��������, ȯ��������� ������ �ٸ��� å���ȴ�. ȯ������������ 1.75%�� ������ �ִٰ� �����ϰ�
* ��-�޷� �Ÿű������� ȯ��������� �Է¹޾� �޷��� �� �� ����Ǵ� ȯ���� �����ϰ�, �����ϰ��� �ϴ� �޷��� ������ �Է¹޾Ƽ� �� ����
* �ش��ϴ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

*�ۼ��� : ������

*��¥ : 2025.04.09

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void dmsgod(void)
{
	double aoao;
	double ghksdbf;

	printf("��/�޷� �Ÿű�����? ");
	scanf("%lf", &aoao);

	printf("ȯ������� (0~100%)? ");
	scanf("%lf", &ghksdbf);

	double dbf = 0.0;
	dbf = aoao + (aoao * 0.0175 * (1 - ghksdbf / 100));
	printf("�޷� �� �� ȯ���� %.6lf �Դϴ�.", dbf);

	double ekffj = 0.0;

	printf("������ �޷�(USD)? ");
	scanf("%f", ekffj);

	printf("USD %.2f �� �� ==> KRW %.2f", ekffj, dbf * ekffj);

	return 0;
}

int main(void)
{
	dmsgod();
	return 0;
}