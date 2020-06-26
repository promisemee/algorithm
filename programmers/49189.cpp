//가장 먼 노드
#include <string>
#include <vector>
#include <queue>
#include <string.h>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0, maxdis = 0;
    vector<vector<int>> graph(n+1, vector<int>());
    vector<bool> visited(n+1), 0;
    vector<int> dis(n+1, 0);
    queue<int> q;
    
    for(int i=0;i<edge.size();i++){
        graph[edge[i][0]][edge[i][1]] = 1;
        graph[edge[i][1]][edge[i][0]] = 1;
    }
    
    q.push(1);
    visited[1] = true;
    
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        for(int i=2;i<=n;i++){
            if(graph[temp][i]==1 && !visited[i]){
                visited[i] = true;
                q.push(i);
                dis[i] = dis[temp]+1;
                maxdis = max(dis[i], maxdis);
            }
        }
    }
    
    for(int i=1;i<=n;i++){
        if(dis[i]==maxdis)
            answer++;
    }
    
    return answer;
}