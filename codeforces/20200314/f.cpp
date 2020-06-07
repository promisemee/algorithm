#include <iostream>
#include <cmath>

using namespace std;

bool issquare(int a){
	if ((int)sqrt(a)*sqrt(a)==a)  return true;
	else return false;
}

int main(){
	int n;
	int answer = 0;
	int max = 0;
	scanf("%d", &n);

	int arr[1000001] = {-1};
	int temp[100000];

	for(int i = 0; i<n; i++){
		scanf("%d", &temp[i]);
		if (max <= temp[i]) max = temp[i];
	}

	for (int i = 1; i <= max; i++) { 
		for (int j = 1; j <= max / i; j++) { 
			arr[i * j]++; 
		} 
	}

	for(int i=0; i<n; i++){
		if (issquare(arr[temp[i]])) answer++;
	}

	printf("%d", answer);

}