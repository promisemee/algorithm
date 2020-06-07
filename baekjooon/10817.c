#include <stdio.h>

void swap(int *a, int *b){
	int temp = *b;
	*b = *a;
	*a = temp;
}

int main(void){
	int num[3];
	scanf("%d %d %d", &num[0], &num[1], &num[2]);

	if(num[0] >= num[1]) swap(num, num+1);
	if(num[1] >= num[2]) swap(num+1,num+2);
	if(num[0] >= num[1]) swap(num, num+1);


	printf("%d\n", num[1]);

	return 0;

}