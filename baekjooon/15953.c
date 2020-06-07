#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int seven[21], eight[31];
	int money1[] = {5000000, 3000000, 2000000, 500000, 300000, 100000};
	int money2[] = {5120000, 2560000, 1280000, 640000, 320000};
	int human[] = {1, 2, 4, 8, 16};
	int i = 0;
	while(i<21){
		for(int j=0;j<6;j++){
			for(int k=0;k<=j;k++){
				seven[i] = money1[j];
				i++;
			}
		}
	}
	i = 0;
	while(i < 31){
		for(int j=0;j<5;j++){
			for(int k=0;k<human[j];k++){
				eight[i] = money2[j];
				i++;
			}
		}
	}

	for(int i=0;i<T;i++){
		int a, b;
		int money = 0;
		scanf("%d %d", &a, &b);
		if (a == 0 || a > 21) money += 0;
		else money += seven[a-1];
		if (b == 0 || b > 31) money += 0;
		else money += eight[b-1];
		printf("%d\n", money);
	}
}