#include <stdio.h>
#include <math.h>

int isprime(int x){
	if (x == 1) return 0;
	else if (x==2) return 1;
	for(int i = 2;i <= sqrt(x);i++){
		if (x % i == 0) return 0;
	}
	return 1;
}

int main(void){
	int N, input;
	int num = 0;
	scanf("%d", &N);
	for(int i = 0 ; i<N;i++){
		scanf("%d", &input);
		if (isprime(input) == 1) num++;
	}
	printf("%d", num);
}