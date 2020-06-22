//정수 삼각형
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    vector<vector<int>> arr(triangle.size(), vector<int>(triangle.size()));
    arr[0][0] = triangle[0][0];
    for(int i=1;i<triangle.size();i++){
        for(int j=0;j<triangle[i].size();j++){
            if(j==0){
                arr[i][j] = triangle[i][j] + arr[i-1][j];
            }else if(j==triangle.size()-1){
                arr[i][j] = triangle[i][j] + arr[i-1][j-1];
            }else{
                arr[i][j] = triangle[i][j] + max(arr[i-1][j], arr[i-1][j-1]);
            }
            
            if(i==triangle.size()-1){
                answer = max(answer, arr[i][j]);
            }
        }
    }
        
    return answer;
}