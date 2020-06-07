#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int N, min = 0, temp = 0;
	cin >> N;
	int a[N];
	for(int i=0;i<N;i++)	
		cin >> a[i];
	sort(a, a+N);
	for(int i=0;i<N;i++){
		temp += a[i];
		min += temp;
	}
	cout << min << endl;
}