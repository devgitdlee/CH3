#include <stdio.h>

int main(void) {
	char name[10] = "";
	int age;
	double height;

	printf("이름 입력 : ");
	scanf("%s", &name);
	printf("나이와 키(cm) 입력 : ");
	scanf("%d%lf", &age, &height);
	printf("%s, %d살, %.1lfcm", name, age, height);

	return 0;
}