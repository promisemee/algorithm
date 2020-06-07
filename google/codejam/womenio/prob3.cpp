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
		int block_i = 0;
		int block_I = 0;
		char next_o, next_O;

		for(int k=0;k<str.size();k++){
			char c = str[k];
			
			if(c== 'i'){ 
				num_i++;
				if (num_i==2){
					block_i = 2;
				}
			}
			else if (c=='I'){ 
				num_I++;
				if (num_I==2){
					block_I = 2;
				}
			}
			else{
				if((block_i+block_I == 0)&&(c == 'O')){
					if(num_I>0){
						num_I--;
						count_IO++;
					}else{
						num_i--;
					}
				}else if((block_i+block_I == 0)&&(c == 'o')){
					if(num_i>0){
						num_i--;
					}else{
						num_I--;
					}
				}else if(block_i==2){
					block_i--;
					num_i--;
					if(c=='o'){
						next_O = 'i';
						next_o = 'I';
					}else{
						next_o = 'i';
						next_O = 'I';
					}
				}else if(block_I==2){
					num_I--;
					block_I--;
					if(c=='o'){
						next_O = 'I';
						next_o = 'i';
					}else{
						count_IO++;
						next_o = 'I';
						next_O = 'i';
					}
				}else if(c == 'o'){
					if (next_o == 'i'){
						block_i--;
						num_i--;
					}else if (next_o == 'I'){
						block_I--;
						num_I--;
					}
				}else if (c=='O'){
					if (next_O == 'i'){
						block_i--;
						num_i--;
					}else if (next_O == 'I'){
						block_I--;
						num_I--;
						count_IO++;
					}
				}
				
			}

			
		}

		printf("Case #%d: %d\n", i, count_IO);
	}
}

