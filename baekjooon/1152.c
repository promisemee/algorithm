#include <stdio.h>
#include <stdlib.h>

int main(void){

	char input[1000000];
	scanf("%[^\n]s", input);
	int i = 0;
	int word = 0;
	if ((input[0] >='a') && (input[0] <='z') || ((input[0] >= 'A')&&(input[0]<='Z'))) word++;

	while(1){
		if (input[i] == 0) break;
		if (input[i] == ' ') 
			word++;
		i++;
	}
	if (input[i-1] == ' ') word--;
	printf("%d\n", word);


	return 0;
}