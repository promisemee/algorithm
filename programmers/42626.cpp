//더 맵게
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<scoville.size();i++){
        pq.push(scoville[i]);
    }
    while(pq.top()<K){
        int k1, k2;
        k1 = pq.top();
        pq.pop();
        if(pq.empty()) return -1;
        k2 = pq.top();
        pq.pop();
        pq.push(k1+k2*2);
        answer++;
    }
    return answer;
}