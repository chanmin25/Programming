/*���ϸ�: Core C Assignment10.c

*���� : ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

*�ۼ��� : ������

*��¥ : 2025.04.03

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void won(void)
{
	double ekffj;
	double dnjs;

	printf("USD ?");
	scanf("%lf", &ekffj);

	printf("��/�޷� ȯ��?");
	scanf("%lf", &dnjs);
	
	printf("USD %.2f = KRW %.2f", ekffj, ekffj * dnjs);

	return 0;
}

int main(void)
{
	won();
	return 0;
}