#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    stack<int> temp_answer;
    for(int i=heights.size()-1;i>=0;i--){
        bool check = true;
        for(int j=i;j>=0;j--){
            if(heights[i]<heights[j]){
                temp_answer.push(j+1);
                check = false;
                break;
            }
        }
        if(check) temp_answer.push(0);
        
    }
    while(!temp_answer.empty()){
        answer.push_back(temp_answer.top());
        temp_answer.pop();
    }
    return answer;
}