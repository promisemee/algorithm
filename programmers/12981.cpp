#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<string> s;

bool check_wrong(string now, string past){
    if (past.back()!=now.front()) return true;
    return false;
}

bool check_duplicate(string word){
    if(s.find(word)!=s.end()) return true;
    s.insert(word);
    return false;
}

vector<int> solution(int n, vector<string> words) {
    vector<int> answer = {0,0};
    int i, j; 
    s.insert(words[0]);
    for(i=1;i<words.size();i++){
        if (check_wrong(words[i], words[i-1]) || check_duplicate(words[i])){  
            return answer = {i%n+1,(i+n)/n};
        }
    }
    return answer;
}