//네트워크
#include <string>
#include <vector>

using namespace std;

void dfs(int n, int k, vector<vector<int>> computers, bool visited[200]){
    for(int i=0;i<n;i++){
        if(computers[k][i]==1 && k!=i){
            if(!visited[i]){
                visited[i] = true;
                dfs(n, i, computers, visited);
            }
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    bool visited[200] = {false};
    
    for(int i=0;i<n;i++){
        if (!visited[i]){
            answer++;
            visited[i] = true;
            dfs(n, i, computers, visited);
        }
    }
    return answer;
}