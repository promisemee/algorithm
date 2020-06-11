//다음 큰 숫자
#include <string>
#include <vector>

using namespace std;

int getNumberOne(int num){
    int ans = 0;
    while(num>0){
        if(num%2==1) ans++;
        num/=2;
    }
    return ans;
}

int solution(int n) {
    int num = getNumberOne(n);
    for(int i=n+1;i<1000001;i++){
        if(num == getNumberOne(i)) return i;
    }
}