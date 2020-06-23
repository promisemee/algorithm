#include <iostream>
#define MAX 50
using namespace std;
int main(){
	int T;
	cin >> T;
	int fib[MAX] = {0};
	fib[0] = 0; fib[1] = 1; fib[2]=1;
	for(int i=2;i<MAX;i++){
		fib[i] = fib[i-1] + fib[i-2];
	}
	for(int i=0;i<T;i++){
		int N;
		cin >> N;
		if(N==0) printf("%d %d\n", 1, 0);
		else printf("%d %d\n", fib[N-1], fib[N]);
	}
}