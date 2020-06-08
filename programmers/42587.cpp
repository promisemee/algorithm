#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    vector<int> ranking = priorities;
    sort(ranking.begin(), ranking.end(), greater<int>());
    queue<pair<int, int>> waiting_q;
    int finish = 0, i = 0;
    for(int i=0;i<priorities.size();i++){
        pair<int, int> temp = make_pair(priorities[i], i);
        waiting_q.push(temp);
    }
    
    while(!waiting_q.empty()){
        pair<int, int> temp = waiting_q.front();
        if (temp.first!=ranking[i]){
            waiting_q.push(temp);
            waiting_q.pop();
        }else{
            i++;
            finish++;
            waiting_q.pop();
            if (temp.second == location){
                return finish;
            }
        }
    }
    
    return finish;
}