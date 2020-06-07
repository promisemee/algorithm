#include <iostream>
#include <cmath>

using namespace std;



int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int num;
		cin >> num;
		int k = 0, count = 0;
		string round;
		while(num>1){
			int temp = num%10;
			if (temp!=0) {
				if (!round.empty()) round += " ";
				round += to_string(temp*(int)pow(10, k));
				count++;
			}
			num = num/10;
			k++;
		}
		printf("%d\n", count);
		cout << round << "\n";
	}
}