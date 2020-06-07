// 입력 받은 대로 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void){
	char a = 0;
	while((a = getchar())!= -1) putchar(a);
	return 0;
}