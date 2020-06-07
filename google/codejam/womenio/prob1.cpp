#include <iostream>
#include <string>

using namespace std;

int main(void){
	int num_i = 0;
	int num_I = 0;
	int input;

	scanf("%d", &input);

	for(int i=1;i<=input;i++){
		string str;
		cin >> str;
		int count_IO = 0;

		for(int k=0;k<str.size();k++){
			char c = str[k];
			if(c=='o'){
				if(num_i>0){
					num_i--;
				}else{
					num_I--;
				}
			}else if(c=='O'){
				if(num_I>0){
					num_I--;
					count_IO++;
				}else{
					num_i--;
				}
			}else if(c=='I'){
				num_I++;
			}else{
				num_i++;
			}
		}

		printf("Case #%d: %d\n", i, count_IO);
	}
}