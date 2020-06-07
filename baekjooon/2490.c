#include <stdio.h>

int main(void){
	int a, b, c, d;
	for (int i = 0 ; i <3; i++){
		scanf("%d %d %d %d", &a, &b, &c, &d);
		int total = a+b+c+d;

		switch(total){
			case 1: 
				printf("C\n");
				break;
			case 2: 
				printf("B\n");
				break;
			case 3: 
				printf("A\n");
				break;
			case 4: 
				printf("E\n");
				break;
			case 0: 
				printf("D\n");
				break;
		}

	}

	return 0;
}