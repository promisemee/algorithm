#include <vector>
#include <iostream>

using namespace std;

int MOD = 20170805;

bool in_range(int i, int j, int m, int n){
    if(i>m-1)  return false;
    if(j>n-1) return false;
    if(i<0) return false;
    if(j<0) return false;
    return true;
}

void dfs(int i, int j, int dir, int m, int n, vector<vector<int>> city_map, int &route){
    int dx[] = {1, 0, -1 ,0}, dy[] = {0, -1 ,0, 1};
    if(i == m-1 && j== n-1) {route++; return;}
    if(city_map[i][j]==1) return;
    else if(city_map[i][j]==2){
        int next_i = i+dx[dir], next_j = j+dy[dir];
        if (next_i<=m-1 && next_j <=n-1) dfs(next_i, next_j, dir, m, n, city_map, route);
    }else{
        for(int k=0;k<4;k++){
            if (dir==-1 && (k==2 || k==3)) continue;
            if (dir-k==2 || dir-k==-2) continue;
            int next_i = i+dx[k], next_j = j+dy[k];
            printf("%d %d\n", next_i, next_j);
            if (in_range(next_i, next_j, m, n)) dfs(next_i, next_j, k, m, n, city_map, route);
            else printf("nah");
        }
    }
}

int main() {
    int m = 3; int n = 3;
    vector<vector<int>> city_map;
    vector<int> temp;
    for(int i=0;i<3;i++)temp.push_back(0); 
    for(int i=0;i<3;i++)city_map.push_back(temp); 
    
    int route = 0;
    dfs(0, 0, -1, m, n, city_map, route);
    printf("%d\n", route);
}