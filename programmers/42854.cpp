#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for(int i=0;i<prices.size();i++){
        bool check = true;
        for(int j=i;j<prices.size();j++){
            if (prices[i]>prices[j]){
                answer.push_back(j-i);
                check = false;
                break;
            }
        }
        if (check) answer.push_back(prices.size()-i-1);
    }
    
    return answer;
}