#include <stdio.h>

int main(void){
	char number[100];
	int k, sum = 0;
	scanf("%d %s", &k, number);
	for(int i = 0; i < k; i++){
		sum += number[i] - '0';
	}
	printf("%d\n", sum);
	return 0;
}