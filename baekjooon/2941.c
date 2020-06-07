#include <stdio.h>

int main(void){
	char word[101];
	scanf("%s", word);
	int i, alp = 0;
	while (word[i] != '\0' && i < 99){
		if (word[i] =='c' && (word[i+1] == '=' || word[i+1] == '-')){
				alp++;
				i+=2;
		}
		else if (word[i] == 'd' && word[i+1] == '-'){
				alp++;
				i+=2;
			}
		else if (word[i] == 'd' && word[i+1] == 'z' && word[i+2] == '=') {alp++; i+=3;}
		else if ((word[i] == 'l' && word[i+1] == 'j')||(word[i] == 'n' && word[i+1] == 'j')){
			alp++;
			i+=2;
		}
		else if ((word[i] == 's' && word[i+1] == '=')||(word[i] == 'z' && word[i+1] == '=')) {alp++; i+=2;}
		else	{alp++;	i++;}
	}
	printf("%d\n", alp);
}