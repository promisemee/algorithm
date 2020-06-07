//어떤 양의 정수 X의 자리수가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 
#include <iostream>
using namespace std;
int main(){
	int N, a[3], count = 0;
	cin >> N;
	for(int i=1;i<=N;i++){
		if (i<100) count++;
		else if(i==1000) ;
		else{
			int k = i;
			for(int j=0;j<3;j++){
				a[j] = k%10;
				k = k/10;
			}
		if (a[0] - a[1] == a[1] - a[2]) count++;
		}
	}
	cout << count << "\n";
	return 0;
}