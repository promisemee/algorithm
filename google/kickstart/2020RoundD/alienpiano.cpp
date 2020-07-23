#include <iostream>
#include <vector>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i=0;i<T;i++){
		int K, up = 0, down = 0, answer = 0;
		cin >> K;
		vector<int> A(K);
		for(int i=0;i<K;i++){
			cin >> A[i];
		}
		for(int i=1;i<K;i++){
			if(A[i]>A[i-1]){
				up++;
				down = 0;
			}else if(A[i]<A[i-1]){
				up = 0;
				down++;
			}
			if(up>3 || down>3){
				up = 0;
				down = 0;
				answer++;
			}
		}

		printf("Case #%d: %d\n", i+1, answer);
	}
}