//이중순위우선큐
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer(2);
    deque<int> dq;
    
    for(int i=0;i<operations.size();i++){
        string command = operations[i];
        if(command=="D 1" && !dq.empty()){
            dq.pop_back();
        }
        else if(command=="D -1" && !dq.empty()){
            dq.pop_front();
        }else if(command[0]=='I'){
            int num = stoi(command.substr(2));
            dq.push_back(num);
        }
        sort(dq.begin(), dq.end());
    }
    
    if(dq.empty()){
        answer[0] = 0; answer[1] = 0;
    }else{
        answer[0] = dq.back(); answer[1] = dq.front();
    }
    
    return answer;
}