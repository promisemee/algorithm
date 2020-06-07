#include <iostream>
using namespace std;
int main(){
	int T;
	scanf("%d", &T);
	for(int i=0;i<T;i++){
		int output = 0;
		string ox;
		cin >> ox;
		int j=1;
		for(int k=0;k<ox.length(); k++){
			if (ox.at(k) == 'O'){
				output += j;
				j++;
			}
			else	{j = 1;}
		}
		cout << output << endl;
	}
}