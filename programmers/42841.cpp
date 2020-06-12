//숫자 야구
#include <string>
#include <vector>

using namespace std;

int check_strike(int a1, int a2){
    int answer = 0;
    string aa = to_string(a1); string bb = to_string(a2);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(aa[i]==bb[j] && i==j){
                answer++;
            }
        }
    }
    return answer;
}

int check_ball(int a1, int a2){
    int answer = 0;
    string aa = to_string(a1); string bb = to_string(a2);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(aa[i]==bb[j] && i!=j){
                answer++;
            }
        }
    }
    return answer;
}

int solution(vector<vector<int>> baseball) {
    int answer = 0;
    int numbers[1000] = {0};
    
    for(int i=0;i<baseball.size();i++){
        int question = baseball[i][0];
        int strike = baseball[i][1]; int ball = baseball[i][2];
        for(int j=123;j<=987;j++){
            string jj = to_string(j);
            if(jj[0]==jj[1] || jj[0]==jj[2] || jj[1] == jj[2] || jj[0]=='0' || jj[1] == '0' || jj[2] == '0') numbers[j] = -1;
            if (numbers[j]!=-1 && strike == check_strike(question, j) && ball == check_ball(question, j))
                numbers[j]++;
            else numbers[j]==-1;
            if(numbers[j]==baseball.size()) answer++;
        }       
    }
    return answer;
}