#include <iostream>
#include <queue>

using namespace std;

int main(){
	int N;
	priority_queue<int, vector<int>, less<int>> left_heap;
	priority_queue<int, vector<int>, greater<int>> right_heap;
	//cin cout 시간초과
	scanf("%d", &N);
	for(int i=0;i<N;i++){
		int tmp;
		scanf("%d", &tmp);
		if(left_heap.empty()){
			left_heap.push(tmp);
		}else if(!right_heap.empty() && left_heap.size() == right_heap.size()){
			left_heap.push(tmp);
		}else{
			right_heap.push(tmp);
		}

		if(!left_heap.empty() && !right_heap.empty() && left_heap.top() > right_heap.top()){
			int left_tmp = left_heap.top();
			int  right_tmp = right_heap.top();
			left_heap.pop();
			right_heap.pop();
			left_heap.push(right_tmp);
			right_heap.push(left_tmp);
		}
		printf("%d\n", left_heap.top());
	}
}