#include <iostream>

using namespace std;

int main(){
	int N, ans = 0;
	scanf("%d", &N);
	int input[N] = {0}, arr[N] = {0};
	for(int i=0;i<N;i++){
		scanf("%d", &input[i]);
	}
	arr[0] = input[0];
	ans = arr[0];
	for(int i=1;i<N;i++){
		arr[i] = input[i];
		if(input[i]+arr[i-1]>0)
			arr[i] = max(arr[i], input[i]+arr[i-1]);
		ans = max(ans, arr[i]);
	}

	printf("%d\n", ans);
}