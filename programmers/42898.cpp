//등굣길
#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    int map[101][101] = {0,};
    int ans[101][101] = {0,};
    
    for(auto c:puddles){
        map[c[1]][c[0]] = 1;
    } 
    ans[1][0] = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(map[i][j]==1)
                ans[i][j] = 0;
            else ans[i][j] = (ans[i-1][j]+ans[i][j-1]) % 1000000007;
        }
    }  
    
    return ans[n][m];
}
// dfs - 시간초과
// #include <string>
// #include <vector>

// #include <string>
// #include <vector>

// void dfs(int m, int n, int y, int x, int &answer, int map[100][100]){
//     if(y==m-1 && x==n-1){
//         answer++;
//         return;
//     }
//     if(x>=n || y>=m) return;
//     if(map[y][x]==0) return;
//     dfs(m, n, y, x+1, answer, map);
//     dfs(m, n, y+1, x, answer, map);
// }

// using namespace std;

// int solution(int m, int n, vector<vector<int>> puddles){
//     int answer = 0;
//     int map[100][100] = {1};
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             map[i][j] = 1;
//         }
//     }
//     for(auto c:puddles){
//         map[c[0]-1][c[1]-1] = 0;
//     }
//     dfs(m,n,0,0,answer, map);
    
//     return answer;
// }