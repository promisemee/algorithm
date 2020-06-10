//체육복
#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int student[n];
    for(int i=0;i<n;i++) student[i]=1;
    for(int i=0;i<lost.size();i++){
        student[lost[i]-1]--;
    }
    for(int i=0;i<reserve.size();i++){
        student[reserve[i]-1]++;
    }
    
    for(int i=0;i<n;i++){
        if(student[i]==1) answer++;
        else if (student[i]==2){
            if((i-1>=0)&&student[i-1]==0) answer+=2;
            else if((i+1<n)&&student[i+1]==0) {student[i+1] +=1; answer ++;}
            else answer ++;
        }
    }
    
    
    return answer;
}