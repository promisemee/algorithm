#include <iostream>
// #include <cstdio>

int main(){
	int alp[26];
	for(int i=0;i<26;i++) alp[i] = -1;
	char c = 0;
	int i=0;
	while((c=getchar())!='\n'){
		if (alp[c-'a'] == -1) alp[c-'a'] = i;
		i++;
	}
	for(int i=0;i<26;i++){
		std::cout << alp[i] << " ";
	}
}