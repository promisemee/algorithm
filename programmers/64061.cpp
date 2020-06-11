//크레인 인형뽑기 게임
#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> basket;
    
    for(int i=0;i<moves.size();i++){
        int next = 0;
        for(int j=0;j<board.size();j++){
            if(board[j][moves[i]-1]!=0){
                next = board[j][moves[i]-1];
                board[j][moves[i]-1] = 0;
                if(!basket.empty() && basket.top() == next){
                    answer+=2;
                    basket.pop();
                }else{
                    basket.push(next);
                }
                break;
            }
        }
    }
        
    
    return answer;
}