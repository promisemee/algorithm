//디스크 컨트롤러
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct compare { 
    bool operator()(vector<int> a, vector<int> b){
        return a[1] > b[1];
    }
};

int solution(vector<vector<int>>jobs) {
    int answer = 0, time = 0, count = 0, i = 0;
    priority_queue<vector<int>, vector<vector<int>>, compare> pq;
    sort(jobs.begin(), jobs.end());
    
    while(1){
        while(i<jobs.size() && time >= jobs[i][0]){
            pq.push(jobs[i++]);
        }if(!pq.empty()){
            time += pq.top()[1];
            answer += time  - pq.top()[0];
            count++;
            pq.pop();
        }
        else time++;
        if(count == jobs.size()) break;
    }
    return(answer / jobs.size());
}