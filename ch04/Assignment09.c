/*���ϸ�: Core C Assignment09

*���� : �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

*�ۼ��� : ������

*��¥ : 2025.04.09

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void time(void)
{
	int num;
	printf("����ð�(��)?");
	scanf("%d", &num);

	int hour = num / 3600;
	int minute = (num % 3600) / 60;
	int second = num % 60;

	printf("����ð��� %d�ð� %d�� %d�� �Դϴ�", hour, minute, second);

	return 0;
}

int main(void)
{
	time();
	return 0;
}