//위장
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> type;
    map<string,int>:: iterator it;
    
    for(int i=0;i<clothes.size();i++){
        type[clothes[i][1]]++;
    }
    
    for(it = type.begin(); it!=type.end();it++){
        answer *= (it->second + 1);
    }
    
    return answer-1;
}