#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		vector<int> sorted;
		int n, temp = 0;

		scanf("%d", &n);
		
		int arr[n], arr_sort[n];
		
		for(int j = 0; j<n;j++){
			scanf("%d", &arr[j]);
			arr_sort[j] = arr[j];
		}
		
		sort(arr_sort, arr_sort+n);
		
		for(int i=0;i<n;i++){
			if (temp!=arr_sort[i]) sorted.push_back(arr_sort[i]);
			temp = arr_sort[i];
		}

		printf("%d\n", sorted.size());
	}
}