//���ϸ�: Assignment02.c

//���� : �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.

//�ۼ��� : ������

//��¥ : 2025.3.20

//���� :


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num;
	float x;

	printf("��ȣ?");
	scanf("%d" , &num);

	printf("����?");
	scanf("%f" , &x);

	printf("%d�� �л��� ������ %f�Դϴ�.\n", num, x);

	return 0;
}
