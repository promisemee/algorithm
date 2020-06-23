#include <iostream>

using namespace std;

int main(){
	int N, total = 0;
	cin >> N;
	int dp[1001], arr[1001];

	for(int i=0;i<N;i++){
		cin >> arr[i];
	}

	for(int i=0;i<N;i++){
		dp[i] = 1;
		for(int j=0;j<i;j++){
			if(arr[i]>arr[j]){
				dp[i] = max(dp[j]+1, dp[i]);
			}
		}
		total = max(total, dp[i]);
	}

	cout << total << "\n";
}