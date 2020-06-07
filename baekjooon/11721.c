#include <stdio.h>

int main(void){
	char word[100];
	while(scanf("%10s", word) == 1){
		printf("%s\n", word);
	}

	return 0;
}