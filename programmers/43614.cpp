//여행경로
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int depth, string start, vector<vector<string>> tickets, vector<string> &answer, bool check[], vector<string> temp){
    temp.push_back(start);
    if(depth==tickets.size()){
        answer = temp;
        return;
    }
    for(int i=0;i<tickets.size();i++){
        if(check[i]==false && tickets[i][0]==start){
            check[i] = true;
            dfs(depth+1, tickets[i][1], tickets, answer, check, temp);
            if(temp.size() == tickets.size()-1) return;
            check[i] = false;
            //왜 되지???????
        }
    }
}

vector<string> solution(vector<vector<string>> tickets) {
    vector<string> answer, temp;
    bool check[10000] = {false};
    sort(tickets.begin(), tickets.end());
    dfs(0, "ICN", tickets, answer, check, temp);
    return answer;
}