#include <iostream>
#include <vector>
using namespace std;

int sum(int a){
	int summ = a;
	while(a!=0){
		summ += a%10;
		a /= 10;
	}
	return summ;
}

int main(){
	vector<int> v;
	for(int i=0;i<=10001;i++){
		v.push_back(i);
	}
	for(int i=1;i<=10000;i++){
		int k = sum(i);
		if (k!=i) v[k] = 0;
	}
	for(int i=1;i<=10000;i++){
		if (v[i]!=0) cout << v[i] << "\n";
	}
}