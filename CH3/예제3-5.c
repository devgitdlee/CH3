#include <stdio.h>

int main(void)
{
	unsigned int a;

	a = 4294967295;      // ū ��� ����
	printf("%d\n", a);   // %d�� ���
	a = -1;              // ���� ����
	printf("%u\n", a);   // %u�� ���

	unsigned long long b;
	b = 18446744073709551615;
	printf("%lld\n", b);
	printf("%llu\n", b);

	return 0;
}