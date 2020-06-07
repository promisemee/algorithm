//https://www.acmicpc.net/problem/2577

#include <stdio.h>

int main(void){

	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	int mult = A*B*C;
	int number[10] = {0};
	while(mult>=1){
		number[mult%10]++;
		mult = mult/10;
	}
	for(int i = 0; i< 10; i++){
		printf("%d\n", number[i]);
	}
	return 0;
}