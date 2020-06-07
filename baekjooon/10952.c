// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main(void){
	int A, B;
	while(1) {
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0) break;
		printf("%d\n", A+B);
	}
}