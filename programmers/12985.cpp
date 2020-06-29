//예상 대진표
#include <iostream>

using namespace std;

int solution(int n, int a, int b){
    int N = 0;
    
    while(n>1){
        n/=2;
        N++;
    }

    for(int i=1;i<=N;i++){
        int max = (a>b)? a:b;
        int min = (a<b)? a:b;
        
        if(max%2==0 && max-min==1) return i;
        
        a = (a+1)/2; b = (b+1)/2;
    }
}