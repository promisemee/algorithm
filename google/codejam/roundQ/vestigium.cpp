#include <iostream>

using namespace std;

int main(){
	int T, N;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d", &N);
		int array[N][N];
		int sum = 0, row = 0, column = 0;
		for(int j=0;j<N;j++){
			for(int k=0;k<N;k++){
				scanf("%d", &array[j][k]);
				if (k==j) sum += array[j][k];
			}
		}

		for(int j=0;j<N;j++){
			int cnt_row[101] = {0};
			for(int k=0;k<N;k++){
				cnt_row[array[j][k]]++;
				if (cnt_row[array[j][k]] > 1) {
					row++; 
					break;}
			}
		}

		for(int j=0;j<N;j++){
			int cnt_column[101] = {0};
			for(int k=0;k<N;k++){
				cnt_column[array[k][j]]++;
				if (cnt_column[array[k][j]] > 1) {
					column++; 
					break;}
			}
		}

		printf("Case #%d: %d %d %d", i+1, sum, row, column);

	}
}