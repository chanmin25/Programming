/*���ϸ�: Core C Assignment02

*���� : ȭ�� �µ��� �Ǽ��� �Է¹޾� ���� �µ��� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

*�ۼ��� : ������

*��¥ : 2025.04.09

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void dhseh(void)
{
	double a;
	printf("ȭ���µ�?");
	scanf("%lf", &a);

	printf("%.2f F = %.2f C", a, (a - 32) * 5.0 / 9.0);

	return 0;
}

int main(void)
{
	dhseh();
	return 0;
}