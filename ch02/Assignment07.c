/*���ϸ�: Assignment07.c

*���� : Ŀ�� ������� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. Ŀ�ǻ������ S,T,G �� ���� ���� �� �ϳ��� �Է¹޴´�.

*�ۼ��� : ������

*��¥ : 2025.3.23

*���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void coffee(void)
{
	int num;
	char size;

	printf("Ŀ�� ������(S,T,G)�� �ֹ� ����?");
	scanf("%c %d", &size, &num);

	printf("%c ������ %d���� �ֹ��մϴ�.\n", size, num);

	return 0;
}

int main(void)
{
	coffee();
	return 0;
}
