#include <iostream>

using namespace std;

int main(){
	int t, a, b, c, d;
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		int max1, max2, min1, min2;
		scanf("%d %d", &a, &b);
		scanf("%d %d", &c, &d);
		if (a>b){
			max1= a; min1 = b;
		}else {max1 = b; min1 = a;}
		if (c>d){ max2 = c; min2 = d;}
		else{max2 = d; min2 = c;}
		if ((min1+min2 == max1) &&(max1 == max2)){
			printf("%s\n", "Yes");
		}else{printf("%s\n", "No");}
	}
}