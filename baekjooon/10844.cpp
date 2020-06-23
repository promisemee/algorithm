#include <iostream>
#define MOD 1000000000

using namespace std;

int main(){
	int N, ans = 0;
	int numbers[101][10] = {0};
	cin >> N;

	for(int i=1;i<=9;i++){
		numbers[1][i] = 1;
	}

	for(int i=2;i<=N;i++){
		for(int j=0;j<=9;j++){
			if(j==0)
				numbers[i][j] = numbers[i-1][1] % MOD;
			else if(j==9)
				numbers[i][j] = numbers[i-1][8] % MOD;
			else numbers[i][j] = (numbers[i-1][j-1] + numbers[i-1][j+1]) % MOD; 
		}
	}

	for(int i=0;i<=9;i++){
		ans = (ans + numbers[N][i]) % MOD;
		//ans += numbers[N][i] % MOD로 하면 틀림
	}

	printf("%d\n", ans%MOD);

}