#include <stdio.h>

/*
실행결과 1
*/

int main(void) {
	char chr = "";
	printf("[ 실.행.결.과 1]\n");
	printf("문자 입력 : ");
	scanf("%c", &chr);
	printf("%c문자의 아스키 코드값은 %d입니다.\n\n", chr, chr);

	/*
	char chr2 = "";
	printf("[ 실.행.결.과 2]\n");
	printf("문자 입력 : ");
	scanf("%c", &chr2);
	printf("%c문자의 아스키 코드값은 %d입니다.", chr2, chr2);
	*/
	return 0;

}