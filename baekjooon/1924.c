#include <stdio.h>

int main(void){
	int x, y, cnt = 0;
	char *week[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	scanf("%d %d", &x, &y);
	for(int i = 0; i<x-1; i++){
		cnt +=month[i];
	}
	cnt+=y;
	printf("%s", week[cnt%7]);
	return 0;
}