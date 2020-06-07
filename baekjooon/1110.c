#include <stdio.h>

int cycle(int N);

int main(void){

	int N;
	int count = 0;
	scanf("%d", &N);
	int temp = cycle(N);
	count++;

	while(N != temp){
		temp = cycle(temp);
		count++;
	}

	printf("%d", count);

	return 0;

}

int cycle(int N){
	return (N%10) * 10 + (N%10 + N/10) % 10;
}

