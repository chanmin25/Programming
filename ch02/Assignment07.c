//���ϸ�: Assignment07.c

//���� : Ŀ�� ������� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. Ŀ�ǻ������ S,T,G �� ���� ���� �� �ϳ��� �Է¹޴´�.

//�ۼ��� : ������

//��¥ : 2025.3.23

//���� :


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num;
	char size;

	printf("Ŀ�� ������(S,T,G)�� �ֹ� ����?");
	scanf("%c %d", &size, &num);

	printf("%c ������ %d���� �ֹ��մϴ�.\n", size, num);

	return 0;
}
