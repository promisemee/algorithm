#include <iostream>
#include <vector>
#include <algorithm>
#define MAXSIZE 52

using namespace std;

vector<int> spin_clockwise(vector<int> vec){
	rotate(vec.rbegin(), vec.rbegin()+1, vec.rend());
	return vec;
}

vector<int> spin_anticlockwise(vector<int> vec){
	rotate(vec.rbegin(), vec.rend()-1, vec.rend());
	return vec;
}

int check_duplicate(vector<int> now, vector<int> up, int pos){
	int answer = 0;
	if(up.size()>pos && (now.at(pos) == up.at(pos))) answer += 1;
	if (pos == 0){
		if (now.at(pos)==now.back()) answer += 2;
		if(now.at(pos) == now.at(pos+1)) answer += 4;
	}else if(pos==now.size()-1){
		if(now.at(pos)==now.at(pos-1)) answer += 2;
		if(now.at(pos)==now.front()) answer += 4;
	}else{
		if(now.at(pos)==now.at(pos-1)) answer += 2;
		if(now.at(pos) == now.at(pos+1)) answer += 4;
	}
	return answer;
}

int count_total(vector<int> array[MAXSIZE], int N, int M){
	int total = 0;
	for(int i=1;i<=N;i++){
		for(int j=0;j<M;j++){
			total += array[i][j];
		}	
	}
	return total;
}

int count_number(vector<int> array[MAXSIZE], int N, int M){
	int total_num = 0;
	for(int i=1;i<=N;i++){
		for(int j=0;j<M;j++){
			if(array[i][j]!=0) total_num++ ;
		}	
	}
	return total_num;
}

void print_array(vector<int> array[MAXSIZE], int N, int M){
	for(int i=1;i<=N;i++){
		for(int j=0;j<M;j++){
			printf("%d ",array[i][j]);
		}	
		printf("\n");
	}
}

int main(){
	int N, M, T, x, d, k;
	scanf("%d %d %d", &N, &M, &T);
	vector<int> array[MAXSIZE], temp_array[MAXSIZE];
	for(int i=1;i<=N;i++){
		for(int j=0;j<M;j++){
			int temp;
			scanf("%d", &temp);
			array[i].push_back(temp);
		}
	}
	for(int i=0;i<T;i++){
		scanf("%d %d %d", &x, &d, &k);
		//spining
		for(int i=1;i<=N;i++){
			if (i%x==0){
				if (d==0){//clockwise
					for(int j=0;j<k;j++){
						array[i] = spin_clockwise(array[i]);
					}
					
				}else{
					for(int j=0;j<k;j++)
						array[i] = spin_anticlockwise(array[i]);
					
				}
			}
		}
		for(int i=1;i<=N;i++){
			temp_array[i] = array[i];
		}
		//spining complete, erase time
		bool check = true;
		for(int i=1;i<=N;i++){
			for(int j=0;j<M;j++){
				if(array[i].at(j)==0) continue;
				else{
					int answer = check_duplicate(array[i], array[i+1], j);
					if (answer == 0) continue;
					else{
						temp_array[i][j] = 0;
						if(answer == 1 || answer == 3 || answer  == 5 ||answer ==7){
							temp_array[i+1][j] = 0;
						}
						if (answer == 2 || answer == 3 || answer == 6 || answer == 7){
							if(j==0) temp_array[i].back() = 0;
							else temp_array[i][j-1] =0;
						}
						if (answer == 4 || answer == 5 || answer == 6 || answer == 7){
							if(j==M-1) temp_array[i][0]=0;
							else temp_array[i][j+1]=0;
						}
						check = false;
					}
				}
			}
		}

		for(int i=1;i<=N;i++){
			for(int j=0;j<M;j++) {
				if (array[i][j]==0)
					temp_array[i][j]==0;
			}
			array[i] = temp_array[i];
		}


		if(check){//get average
			int total = count_total(array, N, M);
			int total_num = count_number(array, N, M);
			double average = (double)total / total_num;
			for(int i=1;i<=N;i++){
				for(int j=0;j<M;j++){
					if(array[i][j]!=0){
						if(array[i][j]>average) array[i][j]--;
						else if(array[i][j]<average) array[i][j]++;
					}
				}
			}
		}
	}
	printf("%d\n", count_total(array, N, M));
}