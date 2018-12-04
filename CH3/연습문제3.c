#include <stdio.h>

int main(void) {
	int han = 70;
	int eng = 80;
	int mat = 90;

	printf("국어: %d, 영어: %d, 수학: %d\n", han, eng, mat);
	printf("총점: %d", han + eng + mat);

	return 0;
}