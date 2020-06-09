//완주하지 못한 선수
#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> marathon;
    
    for(string name:participant){
        marathon[name]++;
    }
    
    for(string name:completion){
        marathon[name]--;
    }
    
    for(string name:participant){
        if (marathon[name]!=0)
            answer = name;
    }

    return answer;
}