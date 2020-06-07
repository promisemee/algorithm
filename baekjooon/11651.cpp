#include <iostream>
#include <algorithm>
using namespace std;

bool compare(pair<int, int>p1, pair<int, int> p2){
	if (p1.second!=p2.second) return p1.second < p2.second;
	return p1.first < p2.first;
}

int main(){
	int N;
	cin >> N;
	pair<int, int> arr[N];
	for(int i=0;i<N;i++){
		cin >> arr[i].first >> arr[i].second;
	}

	sort(arr, arr+N, compare);

	for(int i=0;i<N;i++){
		cout << arr[i]. first << " " << arr[i].second << "\n";
	}
}