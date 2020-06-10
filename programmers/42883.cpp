//큰 수 만들기
#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int max_pos = -1;
    int left = number.size()-k;
    while(answer.size() < number.size()-k){
        int temp = 0, find_max = 0;
        for(int i=max_pos+1;i<=number.size()-left;i++){
            if(find_max < number[i]){
                find_max = number[i];
                temp = i;
            }
        }
        answer.push_back(find_max);
        max_pos = temp;
        left--;
    }
    
    
    return answer;
}