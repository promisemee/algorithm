#include <stdio.h>

int main(void){
	char input[100];
	scanf("%s", input);
	int i = 0;
	while(input[i] != '\0'){
		if (input[i]>='A' && input[i]<='Z') printf("%c", input[i]);
		i++;
	}
}