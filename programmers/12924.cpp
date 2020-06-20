//숫자의 표현
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=1;i<=n;i++){
        int temp = n, k = i; bool flag = true;
        while(temp>0){
            temp-=k;
            if(temp<0){flag = false; break;}
            k++;
        }
        if(flag) answer++;
    }
    return answer;
}