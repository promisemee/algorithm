#include <stdio.h>

#define MAX 50

int main(void){
	char stack[MAX];
	int check_vps, T;
	scanf("%d", &T);
	check_vps = 0;
	for(int i = 0; i < T; i++){
		check_vps = 0;
		scanf("%s", stack);
		for(int j = 0; j < MAX ; j++){
			if (stack[j] == '\0') break;
			if (stack[j] == '(')
				check_vps++;
			else if ((stack[j]==')')&&(check_vps > 0))
				check_vps--;
			else if (stack[j]==')' && check_vps <=0){
				check_vps--;
				break;
			}
		}
		if (check_vps == 0) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}

