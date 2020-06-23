#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	int dp[1000001];
	dp[0] = 0; dp[1] = 0; dp[2] = 1; dp[3] = 1;
	for(int i=4;i<=N;i++){
		dp[i] = dp[i-1]+1;
		if(i%3==0){
			int tmp = dp[i/3]+1;
			dp[i] = min(dp[i], tmp);
		}if(i%2==0){
			int tmp = dp[i/2]+1;
			dp[i] = min(dp[i], tmp);
		}
	}

	printf("%d\n", dp[N]);
	return 0;
}