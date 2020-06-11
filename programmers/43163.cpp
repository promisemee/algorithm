//단어 변환
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int answer = 0;

bool check_diff(string a, string b){
    int diff=0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) diff++;
    }
    if (diff>1) return false;
    return true;
}

void dfs(string word, string target,vector<string> words, bool check[50], int count){
    for(int i=0;i<words.size();i++){
           if(check_diff(word, words[i])){
               if(words[i]==target){
                   answer = count;
                   return;
               }
           }if(check[i]==false){
               check[i]=true;
               dfs(words[i], target, words, check, count+1);
           }
    }
}

int solution(string begin, string target, vector<string> words) {
    auto it = find(words.begin(), words.end(), target);
    if (it >= words.end())  return 0;
    
    bool check[50] = {false};
    dfs(begin, target, words, check, 1);
    
    return answer;
}