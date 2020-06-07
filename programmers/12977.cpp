#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isprime(int n){ 
    if (n <= 1) 
        return false; 
    for (int i = 2; i < n/2; i++) 
        if (n % i == 0) 
            return false; 
    return true; 
} 

int solution(int nums[], size_t nums_len) {
    int answer = 0;
    for(int i=0;i<nums_len;i++){
        for(int j=i+1;j<nums_len;j++){
            for(int k=j+1;k<nums_len;k++){
                if(isprime(nums[i]+nums[j]+nums[k])) answer++;
            }
        }
    }
    return answer;
}