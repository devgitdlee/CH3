#include <stdio.h>

int main(void) {
	char name[10] = "홍길동";
	char blood = 'AB';
	int age = 17;
	float hei = 190.0;

	printf("10년 후의 프로필...\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age + 10);
	printf("키 : %.1lf\n", hei - 0.5);
	printf("혈액형 : %c", blood);

	return 0;


}