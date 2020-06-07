#include <iostream>
#include <algorithm>

using namespace std;

int lcm(int a, int b){
	return a*b/__gcd(a, b);
}

int main(){
	int t,x;
	int a, b;
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		scanf("%d", &x);
		printf("%d %d\n", 1, x-1);
	}
}