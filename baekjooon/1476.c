#include <stdio.h>
int main(void){
	int E, S, M;
	scanf("%d %d %d", &E, &S, &M);
	
	for(int i = 1; i<1000000; i++){
		if ((i-1) % 15 + 1 == E && (i-1)% 28 + 1 == S && (i-1) % 19 + 1 == M){
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}




	// for (int i = 1; i<=30; i++){
		// E+=1; 
		// S+=1; 
		// M+=1;
		// if (E>15) E = 1;
		// if (S>28) S = 1;
		// if (M>19) M = 1;
		// printf("%d	: %d %d %d	: %d %d %d\n", i, E, M, S, i%15, i%19, i% 28);
	// }