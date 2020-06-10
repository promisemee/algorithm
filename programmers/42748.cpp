//K번째수
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> sub;
    
    for(vector<int> v : commands){
        sub.assign(array.begin() + v[0]-1, array.begin()+v[1]);
        sort(sub.begin(), sub.end());
        answer.push_back(sub[v[2]-1]);
        sub.clear();
    }
    
    return answer;
}