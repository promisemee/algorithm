//오픈채팅방
#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<string> cutstring(string record){
    vector<string> answer(3); int i = 0;
    string temp = "";
    for(auto c:record){
        if(c == ' '){
            answer[i++] = temp;
            temp = "";
        }else{
            temp += c;
        }
        answer[i] = temp;
    }
    return answer;
}

vector<string> solution(vector<string> record) {
    vector<pair<string, string>> chatlog;
    vector<string> answer;
    map<string, string> nickname;

    for(int i=0;i<record.size();i++){
        vector<string> temp = cutstring(record[i]);
        chatlog.push_back(make_pair(temp[0], temp[1]));
        if(nickname.find(temp[1])==nickname.end()){ //닉네임 not in map
            nickname.insert(make_pair(temp[1], temp[2]));
        }else{
            if(temp[0]!="Leave")
                nickname[temp[1]] = temp[2];
        }
    }
    
    for(int i=0;i<chatlog.size();i++){
        string temp = "";
        if(chatlog[i].first=="Change") continue;
        temp += nickname[chatlog[i].second];
        if(chatlog[i].first == "Enter"){
            temp+= "님이 들어왔습니다.";
        }else if(chatlog[i].first == "Leave"){
            temp+= "님이 나갔습니다.";
        }
        answer.push_back(temp);
    }
    
    return answer;
}