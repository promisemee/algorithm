#include <stdio.h>
#define MAX 1000001

int main(void){
	int prime[MAX];
	prime[1] = 0;
	for(int i = 2; i<MAX ; i++) prime[i] = 1;
	for(int i = 2; (i*i)<MAX ; i++){
		for(int j = 2; (j*j)<MAX; j++){
			prime[i*j] = 0;
		}
	}
	int M, N;
	scanf("%d %d", &M, &N);
	for(int i = M; i<=N; i++){
		if (prime[i]==1){
			printf("%d\n", i);
		}
	}
}