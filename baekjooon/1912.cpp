#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v;
	int N;
	cin >> N;
	int a;
	for(int i=0;i<N;i++){
		cin >> a;
		v.push_back(a);
	}
	int max = -1000;
	int temp = 0;
	for(int i=0;i<N;i++){
		for(int j=i;j<N;j++){
			temp += v[j];
			if (max<temp) max = temp;
			if (temp<0) break;
		}
		temp = 0;
	}
	cout << max <<"\n";
}