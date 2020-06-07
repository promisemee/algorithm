#include <iostream>

using namespace std;

int main(){
	int t, a, b, min, max;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> a >> b;
		if (a<b) {min = a; max = b;}
		else {min = b; max = a;}
		if (2*min > max) cout << (2*min)*(2*min) << "\n";
		else cout << max*max << "\n";
	}
}