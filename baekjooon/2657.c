// 문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오. 즉, 첫 번째 문자를 R번 반복하고, 두 번째 문자를 R번 반복하는 식으로 P를 만들면 된다. S에는 QR Code "alphanumeric" 문자만 들어있다.

// QR Code "alphanumeric" 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: 이다.

#include <stdio.h>

int main(void){
	int T, R;
	char S[20];
	scanf("%d", &T);

	for(int i =0; i<T; i++){
		scanf("%d %s", &R, S);
		for (int k = 0; S[k] != '\0'; k++){
			for(int j = 0; j<R; j++){
				printf("%c", S[k]);
			}
		}
        printf("\n");
	}
}