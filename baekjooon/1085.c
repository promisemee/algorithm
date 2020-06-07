#include <stdio.h>

int min(int a, int b){
	return a>b? b:a;
}

int main(void){
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	printf("%d", min(x, min(y, min(w-x, h-y))));

	return 0;
}