//4344

#include <stdio.h>

int main(void){
	int C, N;
	scanf("%d", &C);
	for(int i = 0; i < C; i++){
		scanf("%d", &N);
		int sum = 0;
		int a[N];
		for (int j = 0; j < N; j++){
			scanf("%d", &a[j]);
			sum += a[j];
		}
		double avg = (double)sum / N;
		double ppl = 0;
		for(int j = 0; j < N; j++){
			if (a[j] > avg)	ppl++;
		}
		printf("%.3f%\n",ppl/N*100);
	}

	return 0;
}