#include <stdio.h>

int main(void){
	int N, X;
	scanf("%d %d", &N, &X);
	int temp[N];
	int tempy;
	int j = 0;
	for(int i = 0; i < N; i++){
		scanf("%d", &tempy);
		if (X > tempy){
			temp[j] = tempy;
			j++;
		}
	}

	for(int k = 0; k<j; k++)
		printf("%d ", temp[k]);

	return 0;
}