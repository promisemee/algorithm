#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int t, n, k;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> n >> k;
		int total = 0;
		if(k==1) total = n;
		if(n<=k) total = 1;
		else{
			bool check = true;
			for(int l=2;l<k;l++){
				if (l>pow((double)n, (double)2)) break;
				if(n%l==0){
					check = false;
					total = l;
					break;
				}
				if(check) total = n;
			}
		}
		cout << total << "\n";
	}
}