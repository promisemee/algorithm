#include <iostream>

using namespace std;

int main(){
	int a, b, t;
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		scanf("%d %d", &a, &b);
		int temp = b;
		while(a>b){
			b += temp;
		}
		printf("%d", b-a);
	}
}