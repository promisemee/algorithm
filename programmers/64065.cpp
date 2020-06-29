//튜플
#include <string>
#include <vector>
#include <algorithm>

#include <iostream>

using namespace std;

bool Compare(vector<int> a, vector<int> b){
    return a.size() < b.size();
}

vector<int> solution(string s) {
    vector<int> answer, set;
    vector<vector<int>> tuple;
    string temp = "";
    bool visited[100001] = {false};
    
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==',' && !temp.empty()){
            set.push_back(atoi(temp.c_str()));
            temp = "";
        }else if(s[i]=='}'){
            set.push_back(atoi(temp.c_str()));
            temp = "";
            tuple.push_back(set);
            set.clear();
        }else if(s[i]=='{') continue;
        else if (isdigit(s[i])){
            temp+=s[i];
        }
    }
    
    sort(tuple.begin(), tuple.end(), Compare);
    
    for(int i=0;i<tuple.size();i++){
        for(int j=0;j<tuple[i].size();j++){
            if(!visited[tuple[i][j]]){
                answer.push_back(tuple[i][j]);
                visited[tuple[i][j]] = true;
            }
        }
        cout << endl;
    }
    
    return answer;
}