#include <stdio.h>
#include <string.h>

char arr[501];
int main() {
	while (1) {
		for (int i = 0; i < 501; ++i) {
			arr[i] = '\0';
		}
		fgets(arr, 500, stdin);
		if (arr[0] == 'E' && arr[1] == 'N' && arr[2] == 'D') break;
		int len = strlen(arr);
		for (int i = 0; i < len; ++i) {
			if (arr[len - i - 1] == '\n') continue;
			printf("%c", arr[len - i - 1]);
		}
		printf("\n");
	}
}
