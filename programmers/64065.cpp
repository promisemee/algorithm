#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<int> v1, vector<int> v2){
	return v1.size() < v2.size();
}

int main(){
	vector<int> v = {2,1,3,4};
	vector<int> array[4];
	array[0] = {2,1,3};
	array[1] = {2,1};
	array[2] = {1,2,3,4};
	array[3] = {2};

	sort(array, array+4, compare);

	for(int i=0;i<4;i++){
		for(int j = 0;j<array[i].size();j++){
			cout<<array[i][j];
		}
		cout<<"\n";
	}

}