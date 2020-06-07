#include <stdio.h>

int check(int N);

int main(void){
	int N;
	scanf("%d", &N);
	printf("%d", check(N));
	return 0;
}

int check(int N){
	int i = N/5;
	if (i*5 == N) return i;
	for( i = N/5 ; i >= 0; i--){
		if ((N-i*5) % 3 == 0){
			return (i + (N-i*5) / 3);
		}
	}
	return -1;
	
}