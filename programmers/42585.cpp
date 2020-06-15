//쇠막대기
#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string arrangement) {
    int answer = 0, stick = 0;
    stack<char> bracket;
    for(auto c:arrangement){
        if(bracket.empty()) bracket.push(c);
        else{
            if(bracket.top()=='(' && c==')'){
                answer+=stick;
            }
            else if(bracket.top()=='(' && c=='(')
                stick++;
            else if(bracket.top()==')' && c==')'){
                answer++;
                stick--;
            }
            bracket.push(c);
        }
    }
    return answer;
}