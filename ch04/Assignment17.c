/*���ϸ�: Core C Assignment17

*���� : 32��Ʈ ũ���� ������(��ȣ ���� ������)���� 0~31�� ��Ʈ�� �����Ѵ�. 7���� ��Ʈ�� 1�� ��, 15���� ��Ʈ�� 1�� ��, 23���� ��Ʈ�� 1�� 
* ��, 31��° ��Ʈ�� 1�� ���� ���ؼ� 16������ 10����������ϴ� ���α׷��� �ۼ��Ͻÿ�.

*�ۼ��� : ������

*��¥ : 2025.04.10

*���� : v1.0
*/

#include <stdio.h>

void qlxm(void)
{
	unsigned int bit7 = 1 << 7;
	unsigned int bit15 = 1 << 15;
	unsigned int bit23 = 1 << 23;
	unsigned int bit31 = 1 << 31;

	printf("7�� ��Ʈ�� 1�� ��: %08X ,%d \n", bit7, bit7);
	printf("15�� ��Ʈ�� 1�� ��: %08X ,%d \n", bit15, bit15);
	printf("23�� ��Ʈ�� 1�� ��: %08X ,%d \n", bit23, bit23);
	printf("31�� ��Ʈ�� 1�� ��: %08X, %d \n", bit31, bit31);

	return 0;
}

int main(void)
{
	qlxm();
	return 0;
}