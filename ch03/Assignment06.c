/*���ϸ�: Core C Assignment06.c

*���� : ����Ʈ ������ �������ͷ� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 1m^2�� 0.3025�� �ش��Ѵ�. ���α׷��� �ۼ��� ��
* �̸� �ִ� ����� �̿��غ���.

*�ۼ��� : ������

*��¥ : 2025.04.03

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void apt(void)
{
	double mt;

	printf("����Ʈ�� ����(��������)?");
	scanf("%lf", &mt);

	printf("%.2lf �������� = %.2lf ��", mt, mt * 0.3025);

	return 0;
}

int main(void)
{
	apt();
	return 0;
}