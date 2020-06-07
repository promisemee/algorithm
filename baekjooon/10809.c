#include <stdio.h>

int main(void){
	char S[100];
	int alphabet[26];
	for(int i = 0; i<26; i++) alphabet[i] = -1;
	scanf("%s",S);
	int k;
	while (S[i] != '\0'){
		k = S[i] - 'a';
		if (alphabet[k] == -1)
			alphabet[k] = i;
		i++;
	}

	for(i=0;i<26;i++){
		printf("%d ", alphabet[i]);
	}

	return 0;
}