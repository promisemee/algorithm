#include <iostream>
#include <vector>

using namespace std;

int main(){
	int money = 0;
	int N, ramyun; vector<int> factory;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> ramyun;
		factory.push_back(ramyun);
	}

	for(int i=0;i<N;i++){
		while(factory[i]>0){
			if(i+2<N && factory[i+2] != 0 && factory[i+1] != 0){
				if(factory[i+1]>factory[i+2]){
					money+=5;
					factory[i]--; factory[i+1]--;
				}else{
					money+=7;
					factory[i]--; factory[i+1]--; factory[i+2]--;
				}
			}else if(i+1<N && factory[i+1]!=0){
				money+=5;
				factory[i]--; factory[i+1]--;
			}else{
				money+=3;
				factory[i]--;
			}
		}
	}
	printf("%d\n", money);
}