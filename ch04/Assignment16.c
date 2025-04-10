/*���ϸ�: Core C Assignment16

*���� : ��ǻ�� �ý��ۿ����� 32��Ʈ �������� ������ ����Ʈ���� red, green, blue�� ������ ���� ������ �����ϰ� �ֻ��� ����Ʈ�� �������
* �ʰ� 0���� ä���. 0~255������ ���� red, green, blue�� ������ 3���Է¹޾Ƽ� RGB ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* RGB ������ ����� ���� ����Ʈ ������ ���� �˾ƺ��� ������ 16������ ����Ѵ�.

*�ۼ��� : ������

*��¥ : 2025.04.10

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void zjavbxj(void)
{
	unsigned char vl, ch, vk;
	int rgb;

	printf("red? ");
	scanf("%hhu", &vl);

	printf("green? ");
	scanf("%hhu", &ch);

	printf("blue? ");
	scanf("%hhu", &vk);

	rgb = vl | ch << 8 | vk << 16;
	printf("RGB Ʈ��ɷ�: %06X", rgb);

	return 0;
}

int main(void)
{
	zjavbxj();
	return 0;
}