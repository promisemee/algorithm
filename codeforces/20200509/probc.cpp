#include <iostream>

using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		int a, b;
		scanf("%d %d", &a, &b);
		if (a>b) printf("%d\n", b);
		else if (a==b) printf("%d\n", a+1);
		else{
			int count = 0, answer = 1;
			while(1){
				if (answer % a != 0) count++;
				if (count == b) break;
				answer++;
			}
			printf("%d\n", answer);
		}
	}
}