//종이접기
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    while(n>0){
        int k = answer.size();
        answer.push_back(0);
        for(int i = k-1; i>=0; i--){
            if(answer[i]==0)
                answer.push_back(1);
            else answer.push_back(0);
        }
        n--;
    }
    return answer;
}