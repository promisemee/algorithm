//카카오프렌즈 컬러링북
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int i, int j, int color, bool map[100][100], int m, int n, vector<vector<int>> picture, vector<int> &color_area, vector<int> &q){
    if(picture[i][j]==color && !map[i][j]){
        q.push_back(0); map[i][j] = true;
    }else return;
    if(i>0) dfs(i-1, j, color, map, m, n, picture, color_area, q);
    if(j>0) dfs(i, j-1, color, map, m, n, picture, color_area, q);
    if(i<m-1) dfs(i+1, j, color, map, m, n, picture, color_area, q);
    if(j<n-1) dfs(i, j+1, color, map, m, n, picture, color_area, q);
    color_area.push_back(q.size());
}

vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    bool map[100][100] = {false};
    
    vector<int> answer(2);
    vector<int> color_area;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int color = picture[i][j];
            if(map[i][j]==false && color!=0){
                number_of_area++;
                vector<int> q; int size = 0;
                dfs(i, j, color, map, m, n, picture, color_area, q);
                color_area.push_back(size);
            }
        }
    }
    
    sort(color_area.begin(), color_area.end());
    
    answer[0] = number_of_area;
    answer[1] = color_area.back();
    return answer;
}