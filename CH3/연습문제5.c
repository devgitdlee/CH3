#include <stdio.h>

int main(void) {
	char name[10] = "ȫ�浿";
	char blood = 'AB';
	int age = 17;
	float hei = 190.0;

	printf("10�� ���� ������...\n");
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age + 10);
	printf("Ű : %.1lf\n", hei - 0.5);
	printf("������ : %c", blood);

	return 0;


}