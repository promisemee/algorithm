//기능개발
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int day, maxday = 0;
    
    for(int i=0;i<progresses.size();i++){
        day = (100-progresses[i]+speeds[i]-1)/speeds[i];
        if(answer.empty()||maxday < day){
            answer.push_back(1);
            maxday = day;
        }else{
            answer.back()++;
        }
 
    }
    
    
    
    return answer;
    
    
}