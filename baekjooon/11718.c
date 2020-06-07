#include <stdio.h>

int main(void){
	char a = 0;
	while((a = getchar())!= -1) putchar(a);
	return 0;
}